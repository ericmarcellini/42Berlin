/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:00:09 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/08 18:37:51 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <signal.h>

//server.c
void	process_signal_data(int signum);
void	server_handle(void);
//client.c
void	send_bit(int pid, int bit);
void	send_string(int pid, const char *str);

#endif
