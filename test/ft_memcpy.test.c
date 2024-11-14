/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:38:38 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/14 15:07:59 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <string.h>  // for memcpy
#include "libft.h"   // for ft_memcpy

// Define a test case structure for memcpy
typedef struct s_memcpy_test_case {
const void *src;
    void *dest;
    size_t n;
} t_memcpy_test_case;

// Array of test cases
static t_memcpy_test_case test_cases[] = {
    {"Helloo world!",  "abcdefghijklm", 5},      // Copy first 5 characters from "Helloo world!" to "abcdefghijklm"
    {"abcdefghi",      "0000000000",     3},           // Copy first 3 characters from "abcdefghi" to "0000000000"
    {"1234567890",      "**********",     4},         // Copy first 4 characters from "1234567890" to "**********"
    {"Hello, world!",   "##########",     0},             // Copy 0 bytes, no change
    {"Test string",      "**********",     4},         // Copy first 4 characters from "Test string" to "**********"
    {"abcd",             "1111",           2}                    // Copy first 2 characters from "abcd" to "1111"
};

Test(ft_memcpy_tests, test_ft_memcpy)
{
    char actual[256];
    char expected[256];

    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        strncpy(actual, test_cases[i].dest, 256);
        strncpy(expected, test_cases[i].dest, 256);

        // Apply ft_memcpy and memcpy
        ft_memcpy(actual, test_cases[i].src, test_cases[i].n);  // Use ft_memcpy
        memcpy(expected, test_cases[i].src, test_cases[i].n);   // Use standard memcpy

        // Assert that the results are the same
        cr_assert_str_eq(expected, actual, "Test case %zu failed: expected '%s', but got '%s'", i, expected, actual);
    }
}