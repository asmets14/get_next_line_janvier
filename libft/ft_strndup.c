/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 12:55:10 by asmets            #+#    #+#             */
/*   Updated: 2015/02/12 13:47:39 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**copie les n premer caractere
*/
char *ft_strndup(char *s1, int len)
{
	char *ret;

	if ((ret = ft_strnew(len)) == NULL)
		return (NULL);
	ft_strncpy(ret, s1, len);
	return (ret);
}
