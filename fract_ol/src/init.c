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
void	data_init(t_fractal *fractal)
{
	fractal->escape_value = 4;
	fractal->iterations_defintion = 42; 
	fractal->shift_x = 0.0;
	fractal->shift_y = 0.0;
	fractal->zoom = 1.0;
}


static void	events_init(t_fractal *fractal)
{
	mlx_hook(fractal->mlx_window, 2, 1L << 0, key_press, fractal);
	mlx_hook(fractal->mlx_window, 3, 1L << 1, key_release, fractal);
	mlx_hook(fractal->mlx_window, 4, 1L << 2, mouse_press, fractal);
	mlx_hook(fractal->mlx_window, 5, 1L << 3, mouse_release, fractal);
	mlx_hook(fractal->mlx_window, 6, 1L << 6, mouse_move, fractal);
	mlx_hook(fractal->mlx_window, 17, 1L << 17, close_window, fractal);
}

void	fractal_init(t_fractal *fractal)
{
	fractal->mlx_connection = mlx_init();
	if (fractal->mlx_connection == NULL)
		exit_error("mlx_init() failed");
	fractal->mlx_window = mlx_new_window(fractal->mlx_connection,
			WINDOW_WIDTH, WINDOW_HEIGHT,
			fractal->name);
	if (fractal->mlx_window == NULL)
	{
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img.img = mlx_new_image(fractal->mlx_connection, WINDOW_WIDTH, WINDOW_HEIGHT);
	if (fractal->img.img == NULL)
	{
		mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
		mlx_destroy_display(fractal->mlx_connection);
		free(fractal->mlx_connection);
		malloc_error();
	}
	fractal->img.pixels = (char*)mlx_get_data_addr(fractal->img.img,
			&fractal->img.bits_per_pixel, &fractal->img.line_length,
			&fractal->img.endian);
	events_init(fractal);
	data_init(fractal);
}
