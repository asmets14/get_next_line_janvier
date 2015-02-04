/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:53:55 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 19:51:39 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	void *memory;

	memory = (char *)malloc(sizeof(char) * size);
	if (memory != NULL)
	{
		ft_bzero(memory, size);
		return ((void *)memory);
	}
	return (NULL);
}
