/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:46:04 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/08 14:39:35 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	while (str[i])
	{
		count = 0;
		while (str[count + i] && to_find[count] 
			&& str[i + count] == to_find[count])
			count++;
		if (to_find[count] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
