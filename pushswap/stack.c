/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:22:49 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/22 18:29:09 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//grabs arguements, converts them to long nums
void ft_stack_init (t_stack_node **a, char *argv[])
{
	long num;
	int i;

	i = 0;
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		t_stack_node *new_node = ft_create_node(num);
		i++;

		if(!new_node)
		{
			ft_putstr_fd("XDDDDDDD\n", 2);
			ft_error_handling();
			free(new_node);
			//exit(EXIT_FAILURE);
		}
	}
}

//creates a new node per number entered
t_stack_node	*ft_create_node(int num)
{
	t_stack_node	*node;

	node = (t_stack_node*)malloc(sizeof(t_stack_node));
	if (node == NULL)
	{
		return NULL;
	}
	node->numb = num;
	node->next = NULL;

	return node
}
