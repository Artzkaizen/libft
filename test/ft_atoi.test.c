/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:45:14 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/15 21:42:54 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <criterion/criterion.h>


static char *test_description(const char *str, int expected, int actual) {
        char *result = malloc(256 * sizeof(char));

    if (result == NULL)
        return NULL;
    snprintf(result, 256, "Test failed for input: '%s'. Expected %d but got %d", str, expected, actual);
    return result;
}

Test(ft_atoi, test_ft_atoi) {
    const char *str[] = {
        "-2149",               // Negative number
        "2148",                // Positive number
        "abc123",              // Non-numeric string
        "  42 is the answer",  // String with leading spaces
        "000789",              // Number with leading zeros
        " "                    // Empty string (only space)
    };
    for (size_t i = 0; i < sizeof(str) / sizeof(str[0]); i++) {
        int expected = atoi(str[i]);
        int actual = ft_atoi(str[i]); 

		char *description = test_description(str[i], expected, actual);
        cr_assert_eq(expected, actual, "%s", description);
		free(description);
    }
}

TestSuite(atoi_tests, .init = NULL, .fini = NULL);