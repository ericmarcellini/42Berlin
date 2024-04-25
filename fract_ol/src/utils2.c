
#include "../include/fractol.h"

t_complex square_complex(t_complex c)
{
    t_complex result;

    result.rx = (c.rx * c.rx) - (c.iy * c.iy);
    result.iy = 2 * c.rx * c.iy;
    return (result);
}