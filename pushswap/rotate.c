/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:13:00 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/22 15:29:19 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void rotate(t_stack_node **stack) {
    if (!*stack || !(*stack)->next) // Check if the stack is empty or has only one node
        return;

    t_stack_node *last_node = *stack;
    while (last_node->next) { // Find the last node
        last_node = last_node->next;
    }

    // Re-arrange pointers to rotate the stack
    last_node->next = *stack; // Set the current top node as the last node's next
    (*stack)->prev = last_node; // Link back the former top node to the new last node
    *stack = (*stack)->next; // Move the top of the stack to the next node
    (*stack)->prev = NULL; // Set the new top node's prev to NULL
    last_node->next->next = NULL; // Ensure the new last node's next is NULL
}

// ra(rotate a)
void    ra(t_stack_node **stacka)
{
    rotate(stacka);
    ft_putstr_fd("ra\n", 1);
}
// rb (rotate b)
void    rb(t_stack_node **stackb)
{
    rotate(stackb);
    ft_putstr_fd("rb\n", 1);
}
// rr (rotate A & B same time)
void    rr(t_stack_node **stacka, t_stack_node **stackb)
{
    rotate(stacka);
    rotate(stackb);
    ft_putstr_fd("rr\n", 1);
}
