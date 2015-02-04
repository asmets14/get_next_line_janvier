/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:40:31 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 18:47:41 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spe_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	t_trimlist var;

	if (!s)
		return (NULL);
	var.len = ft_strlen(s);
	var.str = ft_strnew(var.len);
	var.i = 0;
	var.k = var.len;
	while (ft_spe_space(s[var.i]) == 1)
		(var.i)++;
	while (var.k != 0 && ft_spe_space(s[var.k - 1]) == 1)
		var.k--;
	var.len = 0;
	var.l = var.k - var.i;
	while (s[var.len] != '\0' && var.len < var.l)
	{
		var.str[var.len] = s[var.i];
		(var.i)++;
		(var.len)++;
	}
	var.str[var.len] = '\0';
	return (var.str);
}
