/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:13:32 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/28 13:26:09 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char dst[20]; // Destination buffer size for testing
//     const char *test_strings[] = {
//         "Hello",            // Short string
//         "This is a test",   // Longer string
//         "",                 // Empty string
//         "Long destination buffer test"
//     };

//     for (int i = 0; i < sizeof(test_strings) /
// sizeof(test_strings[0]); ++i) {
//         const char *src = test_strings[i];
//         size_t src_len = strlen(src);
//         size_t result = ft_strlcpy(dst, src, sizeof(dst));

//         printf("Test %d:\n", i + 1);
//         printf("Source: '%s'\n", src);
//         printf("Returned Length: %zu\n", result);
//         printf("Copied String: '%s'\n", dst);
//         printf("Expected Length: %zu\n", src_len);
//         printf("---------------------------------------------------\n");
//     }

//     return 0;
// }
