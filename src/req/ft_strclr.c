void ft_strclr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		s[len++] = '\0';
	return (len);
}
a