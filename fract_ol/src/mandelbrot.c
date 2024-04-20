/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:14:42 by ermarti2          #+#    #+#             */
/*   Updated: 2024/04/19 18:40:54 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int mandelbrot(double cx, double cy, int max_iter)
{
	int	i;
	i = 0;
	double zx = 0.0, zy = 0.0;
	while (zx*zx + zy*zy < 4 && i < max_iter)
	{
		double tmp = zx*zx - zy*zy + cx;
		zy = 2.0 * zx * zy + cy;
		zx = tmp;
		i++;
	}
	return i;
}
