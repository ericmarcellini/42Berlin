/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:27:57 by ermarti2          #+#    #+#             */
/*   Updated: 2023/12/06 16:41:11 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int *length)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*length += 11;
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		*length += 1;
		ft_putnbr_fd(n, length);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, length);
		ft_putnbr_fd(n % 10, length);
	}
	else
		ft_putchar_fd(n + 48, length);
}

void	ft_unsigned(unsigned int n, int *length)
{
	if (n >= 10)
	{
		ft_unsigned(n / 10, length);
		ft_unsigned(n % 10, length);
	}
	else
		ft_putchar_fd(n + 48, length);
}

void	ft_hex_printer(unsigned long long n, int *length, char x_or_x)
{
	char	str[25];
	char	*base;
	int		i;

	if (x_or_x == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', length);
		return ;
	}
	while (n != 0)
	{
		str[i] = base[n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar_fd(str[i], length);
}
