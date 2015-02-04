/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 11:43:00 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 09:32:32 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	if (!*s1 && !*s2)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
