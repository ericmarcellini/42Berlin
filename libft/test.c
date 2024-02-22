/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:54:44 by ermarti2          #+#    #+#             */
/*   Updated: 2023/12/05 12:54:45 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h" // Include the header file containing the ft_split function declaration


void free_split(char **split) {
    char **temp = split;
    while (*temp != NULL) {
        free(*temp);
        temp++;
    }
    free(split);
}

int main() {
    // Test cases
    char *test_strings[] = {
        "Hello World",
        "This is a test",
        "Another string for splitting",
        "",
        "OnlyOneWord",
        NULL // End of test string array
    };

    char delimiter = ' ';

    // Iterate through test strings
    for (int i = 0; test_strings[i] != NULL; i++) {
        char **result = ft_split(test_strings[i], delimiter);

        if (result == NULL) {
            printf("Test %d: NULL\n", i + 1);
        } else {
            printf("Test %d:\n", i + 1);
            int j = 0;
            while (result[j] != NULL) {
                printf("%s\n", result[j]);
                free(result[j]);
                j++;
            }
            free(result);
        }
        printf("--------------\n");
    }

    return 0;
}

