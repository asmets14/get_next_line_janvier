/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 09:27:09 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 09:28:05 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	str = ft_strnew(i);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
