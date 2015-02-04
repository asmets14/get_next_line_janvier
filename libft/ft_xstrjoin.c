#include "libft.h"

char *ft_xstrjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 || !s2)
		exit(1);
	i = (ft_strlen(s1)) + (ft_strlen(s2) + 1);
	str = ft_strnew(i);
	if (!ft_strcat(str, s1))
		exit(1);
	if (!ft_strcat(str, s2))
		exit(1);
	return (str);
}
