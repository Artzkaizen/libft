/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:38:21 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 17:51:50 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*src1;
	char		*src2;

	i = 0;
	src1 = (char *)s1;
	src2 = (char *)s2;
	while (src1[i] == src2[i] && src1[i] && src2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	else
		return (src1[i] - src2[i]);
}
