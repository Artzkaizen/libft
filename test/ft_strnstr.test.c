/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:42:26 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 17:45:50 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <string.h>
#include "libft.h"

typedef struct s_strnstr_test_case {
    const char  *str;
    const char  *to_find;
    size_t      len;
}   t_strnstr_test_case;

// Array of test cases for ft_strnstr
t_strnstr_test_case test_cases[] = {
    {"Hello, world!", "world", 13},  // Substring found in the middle (entire string)
    {"Hello, world!", "planet", 13}, // Substring not found
    {"Hello, world!", "", 13},       // Empty substring, should return the original string
    {"", "Hello", 5},                // Empty string, substring cannot be found
    {"", "", 0},                     // Both are empty, should return the empty string itself
    {"world, hello!", "world", 5},  // Substring at the start within the first 5 characters
    {"hello, world", "world", 12},  // Substring at the end
    {"abcabcabc", "bc", 6},          // Substring in the middle within first 6 characters
    {"hello", "hello", 5}            // Substring is the same as the string within the length limit
};

Test(ft_strnstr_tests, test_ft_strnstr)
{
    char    *actual;
    char    *expected;

    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
    {
        // Use `strnstr` to get the expected result
        expected = strnstr(test_cases[i].str, test_cases[i].to_find, test_cases[i].len);
        // Call your ft_strnstr function
        actual = ft_strnstr(test_cases[i].str, test_cases[i].to_find, test_cases[i].len);

        if (expected == NULL) {
            cr_assert_null(actual, "Test case %zu failed. Expected NULL, but got '%s'", i, actual);
        }
        else {
            cr_assert_str_eq(actual, expected, "Test case %zu failed. Expected '%s', but got '%s'", i, expected, actual);
        }
    }
}
