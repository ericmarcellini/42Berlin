
#include "../include/fractol.h"

void    fractal_pixel(t_fractal *fractal, int x, int y)
{
    t_complex   c;
    t_complex   z;
    int i;

    c.rx = map(x, fractal->shift_x - 2, fractal->shift_x + 2, WINDOW_WIDTH);
    c.iy = map(y, fractal->shift_y - 2, fractal->shift_y + 2, WINDOW_HEIGHT);
    z.rx = 0;
    z.iy = 0;
    i = 0;
    while (z.rx * z.rx + z.iy * z.iy < 4 && i < 100)
    {
        double temp = z.rx;
        z.rx = z.rx * z.rx - z.iy * z.iy + c.rx;
        z.iy = 2 * temp * z.iy + c.iy;
        i++;
    }
    if (i == 100)
        my_pixel_put(&fractal->img, x, y, 0x000000);
    else
        my_pixel_put(&fractal->img, x, y, 0xFFFFFF);
}

void    fractal_render(t_fractal *fractal)
{
    int x;
    int y;

    y = 0;
    while (y < WINDOW_HEIGHT)
    {
        x = 0;
        while (x < WINDOW_WIDTH)
        {
            fractal_pixel(fractal, x, y);
            x++;
        }
        y++;
    }
    mlx_put_image_to_window(fractal->mlx_connection, fractal->mlx_window, fractal->img.img, 0, 0);
}

void    my_pixel_put(t_img *img, int x, int y, int color)
{
    char *dst;

    dst = img->pixels + (y * img->line_length + x * (img->bits_per_pixel / 8));
    *(unsigned int *)dst = color;
}