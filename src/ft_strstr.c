#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	while (str[i])
	{
		count = 0;
		while (str[count + i] && to_find[count] 
			&& str[i + count] == to_find[count])
			count++;
		if (to_find[count] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
