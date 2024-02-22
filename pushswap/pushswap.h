/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:21:14 by ermarti2          #+#    #+#             */
/*   Updated: 2024/02/22 18:18:41 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include //mylibft

typedef struct s_stack_node
{
	int	numb;
	int i;
	int cost;
	bool above_median;
	bool cheapest;
	struct s_stack_node *target_node;
	struct s_stack_node *next;
	struct s_stack_node *prev;
}	t_stack_node;

//push.c

//reverse.c

//rotate.c

//sort.c

//swap.c

//stack.c

//utils.c
void	ft_putstr_fd(char *s, int fd);
static long	ft_atol(const char *str);
int ft_error_handling(void);

#endif
