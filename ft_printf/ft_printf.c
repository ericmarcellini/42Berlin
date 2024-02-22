/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:27:16 by ermarti2          #+#    #+#             */
/*   Updated: 2023/12/06 16:44:24 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_percent_check(char str, va_list args, int *length)
{
	unsigned long long	ptr;

	if (str == 'c')
		ft_putchar_fd(va_arg(args, int), length);
	else if (str == 's')
		ft_putstr_fd(va_arg(args, char *), length);
	else if (str == 'p')
	{
		ptr = va_arg(args, unsigned long long);
		if (ptr == 0)
			ft_putstr_fd("(nil)", length);
		else
		{
			ft_putstr_fd("0x", length);
			ft_hex_printer(ptr, length, 'x');
		}
	}
	else if (str == 'd' || str == 'i')
		ft_putnbr_fd(va_arg (args, int), length);
	else if (str == 'u')
		ft_unsigned(va_arg(args, unsigned int), length);
	else if (str == 'x' || str == 'X')
		ft_hex_printer(va_arg(args, unsigned int), length, str);
	else if (str == '%')
		ft_putchar_fd('%', length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	va_start(args, str);
	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			ft_percent_check(str[i], args, &length);
		}
		else
			ft_putchar_fd(str[i], &length);
		i++;
	}
	va_end(args);
	return (length);
}
