/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:28:19 by asmets            #+#    #+#             */
/*   Updated: 2014/11/12 19:23:31 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcat(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str;
	char	*str2;

	str = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	while (str[i])
		i++;
	while (str2[j] != '\0')
	{
		str[i] = str2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
