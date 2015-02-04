/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 08:50:09 by asmets            #+#    #+#             */
/*   Updated: 2014/11/08 11:35:54 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *str_dst;
	char *str_src;

	str_dst = (char *)dst;
	str_src = (char *)src;
	while (n--)
	{
		*str_dst++ = *str_src++;
	}
	return (dst);
}
