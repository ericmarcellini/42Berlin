/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:13:51 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/14 15:39:23 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
	}
	return (ch);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(){
// 	char c;

// 	c = 'm';
// 	printf("mine:");
// 	printf("\n%c -> %c", c, ft_toupper(c));

// 	c = 'D';
// 	printf("\n%c -> %c", c, ft_toupper(c));

// 	c = '9';
// 	printf("\n%c -> %c", c, ft_toupper(c));

// 	printf("\nctype.h function:");
// 	c = 'm';
// 	printf("\n%c -> %c", c, toupper(c));

// 	c = 'D';
// 	printf("\n%c -> %c", c, toupper(c));

// 	c = '9';
// 	printf("\n%c -> %c", c, toupper(c));
// 	return 0;
// }
