/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:15:19 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/28 14:07:18 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while (needle[i] != '\0')
		i++;
	if (i == 0)
		return ((char *)haystack);
	while (*haystack && len >= i)
	{
		if (ft_strncmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
