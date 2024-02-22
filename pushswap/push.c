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

//pa (push a)
void push_stack_a(t_stack_node **stacka, t_stack_node **stackb, t_stack_node **tail_a, t_stack_node **tail_b, int *size_a, int *size_b) {
    // Check if stack_b is empty
    if (*stackb == NULL) {
        return; // Nothing to push from stack_b to stack_a
    }

    // Detach the top node of stack_b
    t_stack_node *node_to_move = *stackb;
    *stackb = (*stackb)->next; // Move head_b to the next node
    if (*stackb != NULL) {
        (*stackb)->prev = NULL; // New head of B has no previous node
    } else {
        *tail_b = NULL; // stack_b is now empty
    }

    // Decrement the size of stack_b
    (*size_b)--;

    // Insert the detached node at the top of stack_a
    node_to_move->next = *stacka; // Node points to the current head of A
    if (*stacka != NULL) {
        (*stacka)->prev = node_to_move; // Current head of A's previous points back to the new node
    } else {
        *tail_a = node_to_move; // stack_a was empty, update tail_a
    }
    *stacka = node_to_move; // Update head_a to the new node
    node_to_move->prev = NULL; // New head of A has no previous node

    // Increment the size of stack_a
    (*size_a)++;

    // Indicate the operation
    write(1, "Push Stack A\n", 13);
}

//pb (push b)
void pushtostackb (long numb, //"probably the stack here")
{

}
