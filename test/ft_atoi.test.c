/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:14 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/12 19:02:32 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <criterion/criterion.h>

Test(ft_atoi, test_ft_atoi)
{
	int	org;
	int	mine;

	org = atoi("34343");
	mine = ft_atoi("34343");

	cr_assert_eq(org, mine, "Expected %d got %d", org,mine);
	// cr_assert_eq(ft_atoi("++88"), atoi("++88"));
	// cr_assert_eq(ft_atoi("-123"), atoi("-123"));
	// cr_expect(add(2, 3) == 5, "Expected 2 + 3 to be 5");
    // cr_expect(add(-1, 1) == 0, "Expected -1 + 1 to be 0");
    // cr_expect(add(0, 0) == 0, "Expected 0 + 0 to be 0");
}

TestSuite(atoi_tests, .init = NULL, .fini = NULL);