/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:47:59 by ermarti2          #+#    #+#             */
/*   Updated: 2023/11/27 15:53:22 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	res = malloc((s1_length + s2_length + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i] != '\0')
		res[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
