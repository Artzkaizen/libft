/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:33:40 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 17:54:41 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int	i;
	int	prev;

	i = 0;
	prev = 0;
	while (s[i])
	{
		if (s[i] == c && prev != 0)
			prev = i;
		i++;
	}
	if (s[prev])
		return ((char *)&s[prev]);
	else
		return (0);
}
