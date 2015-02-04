/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:51:05 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 19:53:56 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s1;
	size_t	s2;
	size_t	l;

	s2 = ft_strlen(dst);
	s1 = ft_strlen(src);
	if (size < s2)
	{
		return (size + s1);
	}
	l = 0;
	while ((s2 + l + 1) < (size) && src[l] != '\0')
	{
		dst[l + s2] = src[l];
		l++;
	}
	dst[s2 + l] = '\0';
	return (s1 + s2);
}
