/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:44:55 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/11 17:33:50 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (!sign)
			return (nb);
		else if (*str == '-')
			sign--;
		else 
			sign++;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (nb *= sign);
}
