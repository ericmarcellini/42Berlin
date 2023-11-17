/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:13:10 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/17 18:08:15 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (dst == (void *) 0 && src == (void *) 0)
		return (dst);
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > 0)
	{
		*(destination++) = *(source++);
		n--;
	}
	return (dst);
}
