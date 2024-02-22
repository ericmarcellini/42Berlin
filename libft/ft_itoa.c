/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:47:40 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/27 14:10:43 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_len(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	temp;
	unsigned int	length;

	length = ft_len(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	temp = n;
	if (n < 0)
		temp = -n;
	while (temp != 0)
	{
		str[--length] = (temp % 10) + '0';
		temp /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
