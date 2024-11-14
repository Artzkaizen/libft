/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:01:34 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 19:06:34 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <string.h>
#include "libft.h"

typedef struct s_strstr_test_case {
	const char	*str;
	const char	*to_find;
}	t_strstr_test_case;

// Array of test cases for ft_strstr
static t_strstr_test_case test_cases[] = {
    {"Hello, world!", "world"},  // Substring found in the middle
    {"Hello, world!", "planet"},     // Substring not found
    {"Hello, world!", ""}, // Empty substring, should return the original string
    {"", "Hello"},                   // Empty string, substring cannot be found
    {"", ""},                          // Both are empty, should return the empty string itself
    {"world, hello!", "world"}, // Substring at the start
    {"hello, world", "world"},    // Substring at the end
    {"abcabcabc", "bc"},          // Substring in the middle
    {"hello", "hello"}             // Substring is the same as the string
};

Test(ft_strstr_tests, test_ft_strstr)
{
	char	*actual;
	char	*expected;

	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		expected = strstr(test_cases[i].str, test_cases[i].to_find);
		actual = ft_strstr(test_cases[i].str, test_cases[i].to_find);
		if (expected == NULL){
            cr_assert_null(actual, "Test case %zu failed. Expected NULL, but got '%s'", i, actual);
        }
		else {
            cr_assert_str_eq(actual, expected, "Test case %zu failed. Expected '%s', but got '%s'", i, expected, actual);
        }
    }
}
