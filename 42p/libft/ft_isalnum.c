/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:09:57 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/14 15:39:02 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
//     char c;
//     int result;

//     c = '5';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'Q';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'l';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '+';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

// 	printf("\nOriginal function:");
//     c = '5';
//     result = isalnum(c);
//     printf("\nWhen %c is passed, return value is %d\n", c, result);

//     c = 'Q';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'l';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '+';
//     result = isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);
//     return 0;
// }
