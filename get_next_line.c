/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 13:36:17 by asmets            #+#    #+#             */
/*   Updated: 2015/02/04 14:17:45 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

void remove_from_list(t_list **list)
{
	t_list *tmp;
	t_list *tmp2;
	t_rest *truc;

	if (*list == NULL)
		return ;
	tmp2 = *list;
	while (tmp2)
	{
		truc = (t_rest *)tmp2->content;
		printf("TEST6 [%s][%d]\n", truc->str, truc->fd);
		if (truc->str[0] == '\0')
		{
			printf("TEST5\n");
		 	free(truc->str);
		 	if (tmp2 == *list)
			 	*list = tmp2->next;
			else
				tmp->next = tmp2->next;
			free(tmp2);
		}
		tmp = tmp2;
		tmp2 = tmp2->next;
	}
}
char *get_from_list(t_list *list, int fd, int *ret)
{
	t_rest *truc;

	while (list)
	{
		truc = (t_rest *)list->content;
		if (truc->fd == fd)
		{
			*ret = 1;
			return(ft_strdup(truc->str));
		}
		list = list->next;
	}
	*ret = 0;
	return(NULL);
}

int put_to_list(t_list **list, int fd, char *str)
{
	t_rest *truc;
	t_list *tmp;
	t_list *tmp2;
	t_list *maillon;

	tmp = *list;
	if (str[0] == '\0')
		return (0);
	while (tmp)
	{		
		truc = (t_rest *)tmp->content;
		if (truc->fd == fd)
		{
			if (truc->str != NULL)
			{
				free(truc->str);
				truc->str = ft_strdup(str);
				printf("TEST8\n");
				return(0);
			}
		}
		tmp2 = tmp;
		tmp = tmp->next;
	}
	if ((maillon = ft_memalloc(sizeof(*maillon))) == NULL || (maillon->content = ft_memalloc(sizeof(t_rest))) == NULL)
		return (-1);
	printf("TEST7\n");	
	truc = (t_rest *)maillon->content;
	truc->fd = fd;
	truc->str = ft_strdup(str);
	maillon->next = NULL;
	if (*list == NULL)
		*list = maillon;
	else
		tmp2->next = maillon;
	return (0);
}


int get_next_line(int const fd, char **line)
{
	static t_list *list = NULL;
	int ret;
	char *buff;
	char *temp;
	char *to_free;

sleep(1);	
	temp = get_from_list(list, fd, &ret);
	if ((buff = ft_strnew(BUFF_SIZE)) == NULL)
		return (-1);
	while (((temp == NULL) || (ft_strchr(temp, '\n')) == NULL) && ((ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		printf("TEST4, [%d]\n", ret);
		to_free = temp;
		temp = ft_strjoin(temp, buff);
		if (to_free != NULL)
			free(to_free);
	}
		printf("TEST1, [%d]\n", ret);
	if (ret == 0)
	{
		printf("TEST2\n");
		remove_from_list(&list);
		return (0);
	}
	*line = ft_strcdup(temp, '\n');
	to_free = temp;
	temp = ft_strchr(temp, '\n') + 1;
	put_to_list(&list, fd, temp);
	free(to_free);
	free(buff);
	printf("TEST3\n");
	remove_from_list(&list);
	return (1);
}
