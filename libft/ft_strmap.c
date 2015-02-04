/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:04:09 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 09:26:44 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;
	int		j;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	j = i;
	str = ft_strnew(i);
	while (i--)
		*str++ = f(*s++);
	return (str - j);
}
