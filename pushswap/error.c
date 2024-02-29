#include "pushswap.h"

int	ft_error_handling(t_stack_node **stacka)
{
	free(*stacka);
	ft_putstr_fd("Error_handling\n", 2);
	return (1);
}

int ft_duplicate_error(t_stack_node *a, int num)
{
    if (!a)
        return (0);
    while (a)
    {
        if (a->numb == num)
            return (1);
        a = a->next;
    }
    return (0);
}