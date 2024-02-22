/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:48:08 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/28 15:24:56 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	res = NULL;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen (s + start);
	i = 0;
	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	return (res);
}
