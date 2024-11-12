/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:58:26 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/12 20:00:48 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <criterion/criterion.h>


char *test_description(const char *str, int expected, int actual) {
    char *desc = malloc(256); 
    if (desc == NULL) {
        return NULL;
    }

    snprintf(desc, 256, "Test failed for input: '%s'. Expected %d but got %d", str, expected, actual);

    return desc;
}

// Test case for ft_isalpha with a loop
Test(ft_isalpha_tests, test_ft_isalpha) {
    const char *inputs[] = {
        "a", "z", "A", "Z", "0", "9", " ", "!", "@", "#", "$", "%", "7", "8", "1", "\n", "\t", "Ñ", "ç"
    };
    
    for (size_t i = 0; i < sizeof(inputs) / sizeof(inputs[0]); i++) {
        char c = inputs[i][0];
        
        int expected = (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
        int actual = ft_isalpha(c);

        char *desc = test_description(inputs[i], expected, actual);
        cr_assert_eq(actual, expected, "%s", desc);
        free(desc);
    }
}