/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:38:21 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 17:41:21 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		index;
	char	*src1;
	char	*src2;

	src1 = s1;
	src2 = s2;
	index = 0;
	while (src1[index] == src2[index] && src1[index] && src2[index])
		index++;
	return (src1[index] - src2[index]);
}
