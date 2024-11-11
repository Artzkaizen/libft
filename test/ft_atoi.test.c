/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:14 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/11 17:32:48 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../unity/src/unity.h"
#include "libft.h"
#include <stdlib.h>

void	test_ft_atoi(void)
{
	TEST_ASSERT_EQUAL_INT(atoi("34343"), ft_atoi("34343"));
	TEST_ASSERT_EQUAL_INT(atoi("++88"), ft_atoi("++88"));
	TEST_ASSERT_EQUAL_INT(atoi("-123"), ft_atoi("-123"));
}

void	setUp(void)
{}

void	tearDown(void)
{
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_atoi);
	return (UNITY_END());
}
