/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:01:09 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/16 19:14:24 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*new_str;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (len));
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	return (new_str);
}
