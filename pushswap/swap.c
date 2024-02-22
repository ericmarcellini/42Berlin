/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:13:07 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/22 18:14:31 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

// sa (swap a)
void	ft_sa(t_stack_node **stacka)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*third;

	first = *stacka;
	second = first->next;
	third = second->next;
	if (*stacka == NULL || (*stacka)->next == NULL)
		return ;
	second->prev = first->prev;
	second->next = first;
	first->prev = second;
	first->next = third;

	if (third != NULL)
		third->prev = first;
	ft_putstr_fd("sa\n", 2);
}

// sb (swap b)
void	ft_sb(t_stack_node **stackb)
{
	t_stack_node	*first;
	t_stack_node	*second;
	t_stack_node	*third;

	first = *stackb;
	second = first->next;
	third = second->next;

	if (*stackb == NULL || (*stackb)->next == NULL)
		return ;
	second->prev = first->prev;
	second->next = first;
	first->prev = second;
	first->next = third;
	ft_putstr_fd("sb\n", 2);
}
// ss (swap a & b same time)

void	ft_ss(void)
{
	swapa();
	swapb();
	ft_putstr_fd("ss\n", 2);
}
