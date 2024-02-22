/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermarti2 <ermarti2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:39:24 by ermarti2          #+#    #+#             */
/*   Updated: 2024/01/23 18:23:20 by ermarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"

static char	*read_and_concatenate(int fd, char *buffer, char *backup)
{
	ssize_t		line_reader;
	char		*temp;

	line_reader = 1;
	while (line_reader != '\0')
	{
		line_reader = read(fd, buffer, BUFFER_SIZE);
		if (line_reader == -1)
		{
			free(backup);
			return (NULL);
		}
		else if (line_reader == 0)
			break ;
		buffer[line_reader] = '\0';
		if (!backup)
			backup = ft_strdup("");
		temp = backup;
		backup = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if (ft_strchr (buffer, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract_line(char *line)
{
	size_t	i;
	char	*backup;

	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[i + 1] = '\0';
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*current_line;
	char		*buff;
	static char	*backup;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(backup);
		free(buff);
		backup = NULL;
		buff = NULL;
		return (NULL);
	}
	if (!buff)
		return (0);
	current_line = read_and_concatenate(fd, buff, backup);
	free(buff);
	buff = NULL;
	if (!current_line)
		return (NULL);
	backup = extract_line(current_line);
	return (current_line);
}

// #include <stdio.h>
// #include <fcntl.h>

// int main(void)
// {
//   int    fd;
//   char  *next_line;
//   int  i;

//   i = 0;
//   fd = open("text.txt", O_RDONLY);
//   if (fd == -1)
// 	{
// 		printf("ERROR: file is not opening");
// 		return (1);
// 	}
//   while (1)
//   {
// 	next_line = get_next_line(fd);
// 	if (next_line == NULL)
// 		break;
// 	i++;
// 	printf("[%d]:%s", i, next_line);
// 	free(next_line);
// 	next_line = NULL;
//   }
//   close(fd);
//   return (0);
// }
