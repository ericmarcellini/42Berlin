/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:14:39 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/27 14:09:07 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int ft_strncmp(const char *s1, const char *s2, size_t n);

// int main() {
//     const char *test_strings[][2] = {
//         {"Hello", "Hello"},     // Equal strings
//         {"Hello", "Hi"},        // Different strings
//         {"", ""},               // Empty strings
//         {"Test", "Testing"},    // Partial match
//         {"Long", "Longer"},     // Different lengths
//         {"Cat", "Catapult"}     // Same prefix, different endings
//     };
//     const size_t test_lengths[] = {5, 2, 0, 3, 4, 3};
// Lengths for each test case

//     for (size_t i = 0; i < sizeof(test_strings) /
//sizeof(test_strings[0]); ++i) {
//         const char *s1 = test_strings[i][0];
//         const char *s2 = test_strings[i][1];
//         size_t len = test_lengths[i];

//         int result = ft_strncmp(s1, s2, len);
// 		int result2 = strncmp(s1, s2, len);
//         printf("Test %zu:\n", i + 1);
//         printf("String 1: '%s'\n", s1);
//         printf("String 2: '%s'\n", s2);
//         printf("Length: %zu\n", len);
//         printf("Result ft_strncmp: %d\n", result);
// 		printf("Result strncmp: %d\n", result2);
// 		printf("-----------------------------------\n");
//     }

//     return 0;
// }
