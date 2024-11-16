/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:14:14 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 22:12:39 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	if (!dest || !src)
		return (0);
	if (n == 0 || (src == dest))
		return (dest);
	while (n)
	{
		if (d != s)
			d[n] = s[n];
		n--;
	}
	return (dest);
}
