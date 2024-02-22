/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:56:17 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/08 18:31:23 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "minitalk.h"

void	process_signal_data(int signum)
{
	static unsigned char	character = 0;
	static int				bit_count = 0;

	if (signum == SIGUSR1)
	{
		character = character << 1 | 1;
		bit_count++;
	}
	else if (signum == SIGUSR2)
	{
		character = character << 1;
		bit_count++;
	}
	if (bit_count == 8)
	{
		write(1, &character, 1);
		bit_count = 0;
		character = 0;
	}
}

void	server_handle(void)
{
	ft_putstr_fd("Server Running \n", 1);
	ft_putstr_fd("Server PID is: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	server_handle();
	signal(SIGUSR1, process_signal_data);
	signal(SIGUSR2, process_signal_data);
	while (1)
		pause();
	return (EXIT_SUCCESS);
}
