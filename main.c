/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuezeri <chuezeri@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:15:02 by chuezeri          #+#    #+#             */
/*   Updated: 2024/11/13 20:19:30 by chuezeri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "aabbcc";

int main( void )
{
    // printf( "The string: %s\n", str1 );
    // memcpy( str1 + 2, str1, 4 );
    // printf( "New string: %s\n", str1 );
    
	// printf("\nmine below---------------------------\n");

	printf( "The string: %s\n", str1 );
    memcpy( str1 + 2, str1, 4 );
    printf( "New string: %s\n", str1 );
}