#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h> // machen
# include <stdlib.h>
# include <unistd.h>
# include "../lib/minilibx-linux/mlx.h"
# include <math.h>

#define ERROR_MESSAGE "ERROR!\nPlease use: ./fractol [mandelbrot | julia] [x y]\n"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 800

//*** struct
typedef struct s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;
}	t_fractal;

typedef struct s_fractol
{
	char	*name;
	double	x;
	double	y;
}	t_fractol;

typedef struct s_img
{
	void	*img;
	char	*pixels;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_img;



//*** prototype
//utils.c
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);
int	ft_strlen(const char *s);

//mandelbrot.c
int	mandelbrot(double cx, double cy, int max_iter);



#endif
