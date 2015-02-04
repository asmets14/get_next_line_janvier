/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:18:35 by asmets            #+#    #+#             */
/*   Updated: 2015/01/06 16:00:38 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int j;
	int nb;

	i = 0;
	j = 0;
	nb = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = i;
		i++;
	}
	while (str[i] != '\0' && (ft_isdigit(str[i]) == 1))
	{
		if (str[i] != '-')
			nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (str[j] == '-')
		return (-nb);
	return (nb);
}
