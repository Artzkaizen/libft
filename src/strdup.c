#include <stdlib.h>

char	*strdup(const char *s)
{
	int		lenght;
	char	*dest;

	lenght = 0;
	while (s[lenght])
		lenght++;
	dest = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!dest)
		return (NULL);
	while (lenght >= 0)
	{
		dest[lenght] = s[lenght];
		lenght--;
	}
	return (dest);
}
