/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:10:02 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 19:12:11 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <criterion/criterion.h>
#include <string.h>  // for bzero
#include "libft.h"   // for ft_bzero

// Define a test case structure for bzero
typedef struct s_bzero_test_case {
    char *str;
    size_t len;
    char *expected;
} t_bzero_test_case;

// Array of test cases
t_bzero_test_case test_cases[] = {
    {"Helloo world!", 5, "\0\0\0\0\0 world!"},    // Set first 5 characters to '\0'
    {"abcdefghi", 3, "\0\0\0defghi"},              // Set first 3 characters to '\0'
    {"1234567890", 4, "\0\0\0\0567890"},            // Set first 4 characters to '\0'
    {"Hello, world!", 0, "Hello, world!"},          // Set 0 characters (no change)
    {"Test string", 4, "\0\0\0\0 string"},           // Set first 4 characters to '\0'
    {"abcd", 2, "\0\0cd"}                           // Set first 2 characters to '\0'
};

Test(ft_bzero_tests, test_ft_bzero)
{
    char actual[256];  // Ensure we have enough space for the test cases
    char expected[256];  // Same here

    // Loop through all test cases
    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        // Copy the test string to both actual and expected buffers
        strncpy(actual, test_cases[i].str, 256);
        strncpy(expected, test_cases[i].str, 256);

        ft_bzero(actual, test_cases[i].len);  // Use ft_bzero
        bzero(expected, test_cases[i].len);   // Use standard bzero

        // Assert that the results are the same
        cr_assert_str_eq(expected, actual, "Test case %zu failed: expected '%s', but got '%s'", i, expected, actual);
    }
}
