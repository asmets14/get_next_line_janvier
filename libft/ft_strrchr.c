/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:48:39 by asmets            #+#    #+#             */
/*   Updated: 2014/11/06 17:08:22 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	caract;
	int		i;

	caract = (char)c;
	i = ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == caract)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
