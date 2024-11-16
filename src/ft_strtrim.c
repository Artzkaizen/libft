/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:42:45 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/15 22:13:10 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;
	char	*tmp;

	i = 0;
	tmp = ft_strstr(s1, set);
	if (!tmp)
		return (tmp);
	len = ft_strlen(s1) - ft_strlen(set);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (str);
	return ("");
}
