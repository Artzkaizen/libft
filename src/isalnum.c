int	isalnum(char *str)
{
	if (*str >= 65 && *str <= 90)
		return (1);
	else if (*str >= 97 && *str <= 122)
		return (2);
	else if (*str >= 48 && *str <= 57)
		return (3);
	return (0);
}