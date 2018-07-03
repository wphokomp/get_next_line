/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:28:36 by wphokomp          #+#    #+#             */
/*   Updated: 2018/07/03 12:29:29 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_eol(char *line_manip)
{
	int		pos;

	pos = -1;
	while (line_manip[++pos])
	{
		if (line_manip[pos] == '\n')
			return (pos);
	}
	return (pos);
}

static int		get_line(char *line_manip, char **line)
{
	int		end;
	char	*temp;

	end = ft_eol(line_manip);
	*line = ft_strsub(line_manip, 0, end);
	if (!(temp = (char *)malloc(sizeof(temp) * (ft_strlen(line_manip) + 1))))
		return (-1);
	ft_strcpy(temp, &line_manip[end + 1]);
	ft_strclr(line_manip);
	line_manip = ft_strcpy(line_manip, temp);
	free(temp);
	return (1);
}

static char		*ft_joinfree(char *line_manip, char *buff)
{
	char *temp;

	if (!(temp = ft_strjoin(line_manip, buff)))
		return (NULL);
	free(line_manip);
	line_manip = NULL;
	return (temp);
}

static int		populate_line(const int fd, char **line_manip)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;

	while (!(ft_strchr(*line_manip, '\n'))
			&& (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		*line_manip = ft_joinfree(*line_manip, buff);
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static char	*line_manip;

	if (fd < 0 || fd == 1 || fd == 2 || fd > MAX_FD || !line || BUFF_SIZE < 0)
		return (-1);
	if (!line_manip && (!(line_manip = ft_strnew(2))))
		return (-1);
	if (populate_line(fd, &(line_manip)) < 0)
		return (-1);
	if (line_manip[0] == '\0')
	{
		*line = NULL;
		return (0);
	}
	if (get_line(line_manip, line) < 0)
		return (-1);
	return (1);
}
