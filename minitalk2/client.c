/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:56:28 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/20 15:34:12 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include "libft/libft.h"

void	send_bit(int pid, int bit)
{
	int	signal;

	if (bit == 1)
		signal = SIGUSR1;
	else
		signal = SIGUSR2;
	if (kill(pid, signal) == -1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
}

void	send_string(int pid, const char *str)
{
	int				i;
	unsigned char	c;
	int				j;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		j = 7;
		while (j >= 0)
		{
			send_bit(pid, (c >> j) & 1);
			usleep(350);
			j--;
		}
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		ft_putstr_fd("ERROR: Please use: ./client [PID] [string]\n", 2);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 4)
	{
		ft_putstr_fd("ERROR: Invalid PID\n", 2);
		exit(EXIT_FAILURE);
	}
	send_string(pid, argv[2]);
	return (0);
}
