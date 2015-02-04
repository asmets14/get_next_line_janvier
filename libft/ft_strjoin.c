/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:08:39 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 09:24:40 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	i = (ft_strlen(s1)) + (ft_strlen(s2) + 1);
	str = ft_strnew(i);
	if (!ft_strcat(str, s1))
		return (NULL);
	if (!ft_strcat(str, s2))
		return (NULL);
	return (str);
}
