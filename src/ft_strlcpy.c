/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:45:18 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 15:35:00 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	dest_lenght;
	size_t	src_lenght;

	count = 0;
	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	// if (size <= dest_lenght)
	// 	return (size + src_lenght);
	while (src[count] && count < size)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (src_lenght);
}
