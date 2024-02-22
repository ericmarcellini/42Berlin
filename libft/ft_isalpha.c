/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:44:31 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/20 12:41:54 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int main()
{
	char c;
	c = 'A';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

	c = '+';
	printf("\nResult when random sign is passed: %d", ft_isalpha(c));

	return (0);
}
*/
