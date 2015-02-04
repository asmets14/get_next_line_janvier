/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 16:30:38 by asmets            #+#    #+#             */
/*   Updated: 2015/01/15 15:49:08 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *tmp;
	t_list *beginning_list;
	t_list *brand_list;

	if (lst == NULL && f == NULL)
		return (NULL);
	tmp = f(lst);
	brand_list = ft_lstnew(tmp->content, tmp->content_size);
	if (brand_list == NULL)
		return (NULL);
	beginning_list = brand_list;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		brand_list->next = ft_lstnew(tmp->content, tmp->content_size);
		if (brand_list->next == NULL)
			return (NULL);
		lst = lst->next;
		brand_list = brand_list->next;
	}
	return (beginning_list);
}
