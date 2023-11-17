/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:15:02 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/17 18:24:23 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;
	size_t			i;

	string1 = (unsigned char) *s1;
	string2 = (unsigned char) *s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) string1[i] != (unsigned char) string2[i])
			return ((unsigned char) string1[i] - (unsigned char) string2[i]);
		i++;
	}
	return (0);
}
