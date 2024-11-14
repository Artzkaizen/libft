/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:45:25 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 16:25:45 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	size;
	unsigned int	index;

	size = n;
	index = 0;
	while (s1[index] == s2[index] && s1[index] && s2[index] && index < size)
		index++;
	if (index == n)
		return (0);
	else
		return (s1[index] - s2[index]);
}
