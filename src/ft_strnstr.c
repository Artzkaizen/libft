/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:31:32 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 17:44:36 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		len;
	size_t	index;
	size_t	count;

	index = 0;
	len = ft_strlen((char *)needle);
	if (haystack == needle || !len)
		return ((char *)haystack);
	while (haystack[index] && index < n)
	{
		count = 0;
		while (haystack[count + index] && needle[count] 
			&& haystack[index + count] == needle[count])
			count++;
		if (needle[count] == '\0')
			return ((char *)&haystack[index]);
		index++;
	}
	return (0);
}
