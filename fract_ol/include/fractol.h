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

//*** color
#define BLACK 0x000000
#define WHITE 0xFFFFFF


//*** key



//*** struct
typedef struct s_img
{
	void	*img;
	char	*pixels;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_img;

typedef struct s_complex
{
	double	rx;
	double	iy;
}	t_complex;

typedef struct	s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;

	double	escape_value;
	int		iterations_defintion; 
	double	shift_x;
	double	shift_y;
	double	zoom;
	double	julia_x;
	double	julia_y;
}				t_fractal;




//*** prototype
//utils.c
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);
int	ft_strlen(const char *s);
double map(double unscalednum, double newmin, double newmax, double oldmax);
t_complex complex_add(t_complex a, t_complex b);

//utils2.c
t_complex square_complex(t_complex c);

//mandelbrot.c
int	mandelbrot(double cx, double cy, int max_iter);

//init.c
void	fractal_init(t_fractal *fractal);

//render.c
void	fractal_render(t_fractal *fractal);
void    my_pixel_put(t_img *img, int x, int y, int color);



#endif
