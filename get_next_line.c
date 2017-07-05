/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/17 09:03:41 by wphokomp          #+#    #+#             */
/*   Updated: 2017/07/05 13:06:31 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../../Filler_2/libft/libft.h"

static int	countlines(char **line)
{
	int i;

	i = 0;
	while (line[i] != 0)
		i++;
	return (i);
}

static int	displayline(char **line)
{
	static int	index;
	int			total;
	static char	**lines;

	lines = ft_strsplit(line[0], '\n');
	total = countlines(lines);
	if (index < total)
	{
		ft_putstr(lines[index]);
		index++;
	}
	else
		return (0);
	return (1);
}

static int	addlines(const int fd, char **line)
{
	int			rd;
	char	 buff[BUFF_SIZE + 1];

	line[0] = ft_strnew(1);
	ft_bzero((void*)line[0], (1));
	while ((rd = read(fd, buff, BUFF_SIZE)))
	{
		buff[rd] = 0;
		line[0] = ft_strjoin(line[0], buff);
	}
	return (rd);
}

int			get_next_line(const int fd, char **line)
{
	int			feed;
	static int	isread;
	char		**ln;

	ft_strdel(line);
	line = (char**)malloc(sizeof(line) * (2));
	if (line == NULL)
		return (-1);
	line[1] = 0;
	if (isread != 1)
		if ((feed = addlines(fd, line)) == -1)
			return (-1);
	if (isread != 1)
	{
		ln = line;
		isread = 1;
	}
	if ((feed = displayline(ln)) == -1)
		return (-1);
	return (feed);
}
