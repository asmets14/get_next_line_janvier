
#include "libft.h"

// joint, exit et free selon le troisieme parametre 

char *ft_xstrjoin_free(char const *s1, char const *s2, char freez)
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
	if (freez == 'g')
		free((void *)s1);
	else if (freez == 'd')
		free((void *)s2);
	else if (freez == 'b')
	{
		free((void *)s1);
		free((void *)s2);
	}
	return (str);
}
