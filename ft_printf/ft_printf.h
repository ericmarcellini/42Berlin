/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:07:17 by ermarti2          #+#    #+#             */
/*   Updated: 2023/12/06 16:32:52 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_putstr_fd(char *s, int *length);
int		ft_putchar_fd(int c, int *length);
void	ft_putnbr_fd(int n, int *length);
void	ft_unsigned(unsigned int n, int *length);
void	ft_hex_printer(unsigned long long n, int *length, char x_or_x);
int		ft_printf(const char *str, ...);

#endif
