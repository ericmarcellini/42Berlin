/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:12:58 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/22 15:29:15 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void reverse_rotate(t_stack_node **stack)
{
    if(!*stack || !(*stack)->next)
        return;
    t_stack_node *last;
    t_stack_node *second_last;

    last = *stack;
    second_last = NULL;
    while(last->next)
    {
        second_last = last;
        last = last->next;
    }

    if(second_last)
        second_last->next = NULL;
    last->next = *stack;
    (*stack)-> prev = last;
    last->prev = NULL;
    *stack = last;
}
// rra (reverse rotate a)
void    rra(t_stack_node **stacka)
{
    reverse_rotate(stacka);
    ft_putstr_fd("rra\n", 1);
}
// rrb (reverse rotate b)
void    rrb(t_stack_node **stackb)
{
    reverse_rotate(stackb);
    ft_putstr_fd("rrb\n", 1);
}
// rrr (reverse rotate a & b)

void    rrr(t_stack_node **stacka, t_stack_node **stackb)
{
    reverse_rotate(stacka);
    reverse_rotate(stackb);
    ft_putstr_fd("rrr\n", 1);
}