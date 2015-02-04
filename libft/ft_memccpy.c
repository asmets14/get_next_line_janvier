/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:41:04 by asmets            #+#    #+#             */
/*   Updated: 2014/11/12 19:19:06 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	unsigned char	caract;
	size_t			i;

	i = 0;
	caract = c;
	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = tmp2[i];
		if (tmp2[i] == caract)
		{
			return (&tmp[i + 1]);
		}
		i++;
	}
	return (NULL);
}
