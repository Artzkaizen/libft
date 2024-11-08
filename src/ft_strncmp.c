int	strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] && s2[index] && index < n)
		index++;
	if (index == n)
		return (0);
	else
		return (s1[index] - s2[index]);
}
