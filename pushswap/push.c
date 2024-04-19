/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:12:55 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/22 18:33:32 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void push(t_stack_node **dst, t_stack_node **src) {
    if (!*src) // Check if the source stack is empty
        return;

    t_stack_node *push_node = *src; // Get the top node from the source stack
    *src = (*src)->next; // Update the top of the source stack to the next node

    if (*src) // If there's a node below the one being pushed
        (*src)->prev = NULL; // Set it as the new head of the source stack

    push_node->prev = NULL; // Detach the node from the source stack

    if (!*dst) { // If the destination stack is empty
        *dst = push_node; // Set the pushed node as the only node in the destination stack
        push_node->next = NULL; // Ensure it's marked as the last node
    } else { // If the destination stack is not empty
        push_node->next = *dst; // Place the pushed node above the current top node of the destination stack
        (*dst)->prev = push_node; // Update the former top node to acknowledge the new top node
        *dst = push_node; // Update the destination stack's top pointer
    }
}

//pa (push a)
void    pa(t_stack_node **stacka, t_stack_node **stackb)
{
    push(stacka ,stackb);
    ft_putstr_fd("pa\n", 1);
}
//pb (push b)
void pb (t_stack_node **stacka, t_stack_node **stackb)
{
    push(stackb, stacka);
    ft_putstr_fd("pb\n", 1);
}
