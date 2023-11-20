/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:09:36 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/20 12:42:01 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > '0')
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main ()
// {
//     char c;
// 	c='5';
// 	printf("\n ft_isdigit");
//     printf("\nResult when numeric character is passed: %d", ft_isdigit(c));

//     c='+';
//     printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));
// 	printf("\n Original isdigit");
//     c='9';
//     printf("\nResult when numeric character is passed: %d", isdigit(c));

//     c='+';
//     printf("\nResult when non-numeric character is passed: %d", isdigit(c));

//     return 0;
// }
