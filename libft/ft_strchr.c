/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:23:37 by asmets            #+#    #+#             */
/*   Updated: 2014/11/12 19:24:07 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if ((char)c == 0)
		return ((char *)(&(s[i])));
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(&(s[i])));
		i++;
	}
	return (NULL);
}
