/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:42:45 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/16 21:35:01 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	size_t	setlen;
	char	*str;

	i = 0;
	len = ft_strlen(s1);
	setlen = ft_strlen(set);
	while (ft_strncmp(&s1[i], set, setlen) == 0 && i < len)
		i++;
	while (ft_strncmp(&s1[len - setlen], set, setlen) == 0 && i < len)
		len--;
	if (i >= len)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (str);
	ft_strlcpy(str, &s1[i], len - i);
	return (str);
}
