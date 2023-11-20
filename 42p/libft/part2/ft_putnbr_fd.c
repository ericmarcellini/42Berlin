/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:47:47 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/20 16:23:10 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	result;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (n < 0)
	{
		write(fd, '-', 1);
		n = -n;
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		//n %= 10;
	}
	result = n % 10 + 48;
	write(fd, &result, 1);
}
