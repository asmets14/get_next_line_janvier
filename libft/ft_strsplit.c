/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asmets <asmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:55:39 by asmets            #+#    #+#             */
/*   Updated: 2014/11/13 09:32:03 by asmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_create_tab(int len)
{
	char **ret;

	ret = (char **)ft_memalloc((sizeof(char *) * len + 1));
	if (!ret)
		return (NULL);
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	len;
	int		j;
	int		i;
	int		k;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = ft_create_tab(len);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > k)
			str[j++] = ft_strsub(s, k, (i - k));
	}
	str[j] = NULL;
	return (str);
}
