/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:07:48 by ermarti2          #+#    #+#             */
/*   Updated: 2024/04/19 19:37:36 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static void	malloc_error(void)
{
	ft_putstr_fd("Error: malloc() failed\n", STDERR_FILENO);
	exit(EXIT_FAILURE);
}
//init mlx /listen /events/ hookdata

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init();
	if (fractal->mlx_connection == NULL)
		exit_error("mlx_init() failed");
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection,
			WINDOW_WIDTH, WINDOW_HEIGHT,
			fractal->name); title;
	if (fractal->mlx_window == NULL)
	{
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img.img = mlx_new_image(fractal->mlx_connection,
			WINDOW_WIDTH,
			WINDOW_HEIGHT);
	if (fractal->img.img == NULL)
	{
		mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img.pixels = (int *)mlx_get_data_addr(fractal->img.img,
			&fractal->img.bits_per_pixel, &fractal->img.line_length,
			&fractal->img.endian);
	//events_init(fractal); todo
	//data_init(fractal); todo
}
