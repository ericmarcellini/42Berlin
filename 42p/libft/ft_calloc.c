/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:13:23 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/20 12:20:14 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;
	size_t	i;

	i = 0;
	tmp = malloc(count * size);

	if (!tmp)
		return (NULL);
	while (i < count * size)
		{
			tmp[i] = 0;
			i++;
		}
	return (tmp);
}
