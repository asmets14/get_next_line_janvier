/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 13:36:17 by asmets            #+#    #+#             */
/*   Updated: 2015/02/10 04:15:54 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int			remove_from_list(t_list **list, char *temp)
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!temp)
		return (0);
	if (*list == NULL)
		return (1);
	tmp2 = *list;
	while (tmp2)
	{
		if (((t_rest *)tmp2->content)->str == NULL)
		{
			((t_rest *)tmp2->content)->fd = -1;
			free((t_rest *)(tmp2->content));
			if (tmp2 == *list)
				*list = tmp2->next;
			else
				tmp->next = tmp2->next;
			free(tmp2);
		}
		else
			tmp = tmp2;
		tmp2 = tmp2->next;
	}
	return (1);
}

char		*get_from_list(t_list *list, int fd, int *ret, char **buff)
{
	t_rest	*truc;
	char	*str;

	if (fd < 0 || fd == 1 || fd == 2 || (*buff = ft_strnew(BUFF_SIZE)) == NULL)
		return (NULL + 1);
	*ret = 0;
	while (list)
	{
		truc = (t_rest *)list->content;
		if (truc->fd == fd)
		{
			str = ft_strdup(truc->str);
			free(truc->str);
			truc->str = NULL;
			return (str);
		}
		list = list->next;
	}
	return (NULL);
}

int			add_maillon(t_list **list, t_list *tmp2, int fd, char *str)
{
	t_list	*maillon;
	t_rest	*truc;

	if ((maillon = ft_memalloc(sizeof(*maillon))) == NULL \
		|| (maillon->content = ft_memalloc(sizeof(t_rest))) == NULL)
		return (-1);
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

int			put_to_list(t_list **list, int fd, char *str)
{
	t_rest	*truc;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *list;
	if (str == NULL + 1 || str[0] == '\0')
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
				return (0);
			}
		}
		tmp2 = tmp;
		tmp = tmp->next;
	}
	return (add_maillon(list, tmp2, fd, str));
}

int			get_next_line(int const fd, char **line)
{
	static t_list	*list = NULL;
	char			*buff;
	char			*temp;
	char			*to_free;
	int				ret;

	if ((temp = get_from_list(list, fd, &ret, &buff)) == NULL + 1)
		return (-1);
	while (((temp == NULL) || (ft_strchr(temp, '\n')) == NULL) \
		&& ((ret = read(fd, buff, BUFF_SIZE)) > 0))
	{
		to_free = temp;
		temp = ft_strjoin(temp, buff);
		bzero(buff, BUFF_SIZE);
		if (to_free != NULL)
			free(to_free);
	}
	free(buff);
	if ((ret = (ret == -1 ? -1 : remove_from_list(&list, temp))) < 1)
		return (ret);
	*line = ft_strcdup(temp, '\n');
	put_to_list(&list, fd, ft_strchr(temp, '\n') + 1);
	free(temp);
	return (1);
}
