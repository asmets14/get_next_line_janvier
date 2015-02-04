/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/15 15:46:56 by asmets            #+#    #+#             */
/*   Updated: 2015/01/15 15:47:07 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstlen(t_list *list)
{
	size_t len;

	if (list == NULL)
		return (0);
	len = 0;
	while (list)
	{
		len++;
		list = list->next;
	}
	return (list);
}
