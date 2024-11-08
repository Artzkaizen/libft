#include <stdlib.h>

void	*ft_strnew(size_t size)
{
	void	*memory;
	size_t	i;

	i = 0;
	memory = malloc(size);
	if (!memory)
		return (NULL);
	while (i < size)
		((unsigned char *)memory)[i++] = 0;
	return (memory);
}
