/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:48:05 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/12 19:53:47 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <ctype.h> 
#include "libft.h"
#include <stdio.h>


// Function to test isalnum behavior
static char *test_description(const char *str, int expected, int actual) {
    char *desc = malloc(256); 
    if (desc == NULL) 
        return NULL; 

    snprintf(desc, 256, "Test failed for input: '%s'. Expected %d but got %d", str, expected, actual);

    return desc;
}

// Test case for ft_isalnum with a loop
Test(ft_isalnum_tests, test_ft_isalnum) {
    // Array of test inputs (characters to test)
    const char *inputs[] = {
        "a", "z", "A", "Z", "0", "9", " ", "!", "@", "#", "$", "%", "7", "8", "1", "\n", "\t", "Ñ", "ç"
    };
    
    // Loop over the test inputs
    for (size_t i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++) {
        // Get the current character to test
        char c = inputs[i][0];
        
        // Determine if the current character is alphanumeric
        int expected = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
        int actual = ft_isalnum(c); // Test your custom `ft_isalnum`

        // Get the description message for test failure
        char *desc = test_description(inputs[i], expected, actual);

        // Perform the test and show the description on failure
        cr_assert_eq(actual, expected, "%s", desc);

        // Free the allocated memory for the description
        free(desc);
    }
}

TestSuite(ft_isalnum, .init = NULL, .fini = NULL);

