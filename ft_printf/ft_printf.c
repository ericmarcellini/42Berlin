/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:27:16 by ermarti2          #+#    #+#             */
/*   Updated: 2023/12/04 18:26:25 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_percent_check(char str, va_list *args, int *len, int *i)
{
	str++;
	if (str == 'c')
		return (ft_putchar_fd(args, len));
	else if (str == 's')
		return (ft_putstr_fd(args, len));
	else if (str == 'p') // hexadecimal shit
	//function execution
	else if (str == 'd' || str == i)
		return (ft_putnbr_fd(args, len));
	//function execution
	else if (str == 'u')
	//function execution
	else if (str == 'x')
	//function execution
	else if (str == 'X')
	//function execution
	else if (str == '%')
		return (write(1, '%', 1));
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;
	int	length;

	va_start(args, str);
	i = 0;
	length = NULL;
	if(str == NULL) // xdddd?
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_percent_check(str[i], length) // wrong but checks when it finds a %
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			//wrong but basically keep writting
		}
		i++;
	}
	va_end(args);
	return (length);
}
