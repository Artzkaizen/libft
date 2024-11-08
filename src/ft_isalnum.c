/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:35:27 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/08 10:35:33 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char *str)
{
	if (*str >= 65 && *str <= 90)
		return (1);
	else if (*str >= 97 && *str <= 122)
		return (2);
	else if (*str >= 48 && *str <= 57)
		return (3);
	return (0);
}
