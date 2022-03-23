/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyaiche <lyaiche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:42:58 by lyaiche           #+#    #+#             */
/*   Updated: 2022/03/23 15:32:45 by lyaiche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_free_char(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

char	*get_next_line_4(char *returned, char **keep, char	*line, int i)
{
	ft_free_char(keep);
	*keep = ft_strdup(&line[i + 1]);
	if (!*keep)
		return (NULL);
	line[i + 1] = '\0';
	i = -1;
	while (line[++i])
		returned[i] = line[i];
	return (returned);
}

char	*get_next_line_3(char **keep, char *line, int inspect)
{
	char	*returned;
	int		i;

	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	returned = ft_calloc_char(i + 2);
	if (!returned)
		return (NULL);
	if (line[i] == '\n' && line[i + 1] != '\0')
		returned = get_next_line_4(returned, keep, line, i);
	else if (line[i] == '\n' && line[i + 1] == '\0')
	{
		i = -1;
		while (++i <= inspect)
			returned[i] = line[i];
		ft_free_char(keep);
	}
	return (returned);
}

char	*get_next_line_2(char **keep, int array_len, int inspect)
{
	char	*returned;
	char	*line;

	if (array_len == -1)
	{
		ft_free_char(keep);
		return (NULL);
	}
	if (!*keep && array_len == 0)
		return (NULL);
	line = ft_strdup(*keep);
	if (!line)
		return (NULL);
	if (inspect == -1 && array_len == 0)
	{
		ft_free_char(keep);
		returned = (ft_strdup(line));
	}
	else
		returned = get_next_line_3(keep, line, inspect);
	ft_free_char(&line);
	return (returned);
}

char	*get_next_line(int fd)
{
	char		*buf;
	static char	*keep = NULL;
	int			inspect;
	int			array_len;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= INT_MAX - 1
		|| fd >= OPEN_MAX)
		return (NULL);
	inspect = check(keep, '\n');
	buf = NULL;
	while (inspect == -1)
	{
		buf = ft_calloc_char(BUFFER_SIZE + 1);
		if (!buf)
			return (NULL);
		array_len = read(fd, buf, BUFFER_SIZE);
		if (array_len <= 0)
			break ;
		keep = ft_strjoin(keep, buf);
		inspect = check(keep, '\n');
		ft_free_char(&buf);
	}
	ft_free_char(&buf);
	return (get_next_line_2(&keep, array_len, inspect));
}
