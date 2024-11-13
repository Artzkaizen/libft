/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:56:48 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 19:06:19 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <string.h>
#include "libft.h"

// Define a test case structure
typedef struct s_memset_test_case {
    char *str;
    char fill_char;
    size_t len;
    char *expected;
} t_memset_test_case;

// Array of test cases
static t_memset_test_case test_cases[] = {
    {"Helloo world!", '*', 5, "***** world!"},        // Set first 5 chars to '*'
    {"abcdefghij", 'x', 3, "xxxdefghij"},              // Set first 3 chars to 'x'
    {"1234567890", '0', 4, "0000567890"},              // Set first 4 chars to '0'
    {"Hello, world!", 'z', 0, "Hello, world!"},        // Set 0 chars (no change)
    {"Test string", 'T', 4, "TTTT string"},             // Set first 4 chars to 'T'
    {"abcd", 'a', 2, "aabb"}                           // Set first 2 chars to 'a'
};

Test(ft_memset_tests, test_ft_memset)
{
    char actual[256];  // Ensure we have enough space for the test cases
    char expected[256];  // Same here

    // Loop through all test cases
    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        // Copy the test string to both actual and expected buffers
        strncpy(actual, test_cases[i].str, 256);
        strncpy(expected, test_cases[i].str, 256);

        // Apply ft_memset and memset
        ft_memset(actual, test_cases[i].fill_char, test_cases[i].len);  // Use ft_memset
        memset(expected, test_cases[i].fill_char, test_cases[i].len);   // Use standard memset

        // Assert that the results are the same
        cr_assert_str_eq(expected, actual, "Test case %zu failed: expected '%s', but got '%s'", i, expected, actual);
    }
}
