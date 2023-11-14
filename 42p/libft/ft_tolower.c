/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:13:59 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/14 16:31:11 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	char c, result;

// 	c = 'M';
// 	result = tolower(c);
// 	printf("tolower(%c) = %c\n", c, result);

// 	c = 'm';
// 	result = tolower(c);
// 	printf("tolower(%c) = %c\n", c, result);

// 	c = '+';
// 	result = tolower(c);
// 	printf("tolower(%c) = %c\n", c, result);

// 	return (0);
// }
