/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:47:53 by ermarti2          #+#    #+#             */
/*   Updated: 2024/01/23 17:43:00 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	char_in_str(const char c, const char *charset)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return (1);
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static	size_t	wordcounter(const char *str, const char *charset)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (char_in_str(str[i + 1], charset) == 1
			&& char_in_str(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

static	void	wordcpy(char *to, const char *from, const char *charset)
{
	size_t	i;

	i = 0;
	while (char_in_str(from[i], charset) == 0)
	{
		to[i] = from[i];
		i++;
	}
	to[i] = '\0';
}

static	void	word_split(char **splitted, const char *str, char *charset)
{
	size_t	i;
	size_t	j;
	size_t	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (char_in_str(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_in_str(str[i + j], charset) == 0)
				j++;
			splitted[word] = (char *)malloc(sizeof(char) * (j + 1));
			wordcpy(splitted[word], str + i, charset);
			i = i + j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;

	words = wordcounter(s, &c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);
	split[words] = 0;
	word_split(split, s, &c);
	return (split);
}
