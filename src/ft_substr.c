/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:19:36 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/15 21:53:19 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	strlen;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen || len == 0)
		return (ft_strdup(""));
	if (start + len > strlen)
		len = strlen - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	return (ft_strncpy(sub, s + start, len));
}
