/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:25:38 by ermarti2          #+#    #+#             */
/*   Updated: 2024/04/19 18:40:45 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (s1 == NULL || s2 == NULL || n <= 0)
		return (0);

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}

int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

double map(double unscalednum, double newmin, double newmax, double oldmax)
{
	return (newmax - newmin) * (unscalednum - 0) / (oldmax - 0) + newmin;
}

t_complex complex_add(t_complex a, t_complex b)
{
	t_complex result;

	result.rx = a.rx + b.rx;
	result.iy = a.iy + b.iy;
	return (result);
}