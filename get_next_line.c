/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/13 10:48:54 by wphokomp          #+#    #+#             */
/*   Updated: 2017/09/18 10:29:09 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	chk_rd(char **str, char *buff, char **line, int indx)
{
	char	*tmp;

	buff[indx] = '\0';
	if ((tmp = ft_strchr(buff, '\n')))
	{
		*tmp = '\0';
		*line = ft_strjoin(*str, buff);
		tmp = NULL;
		free(buff);
		buff = 0;
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	char	*str;
	char	*tmp;
	char	*buff;
	int		indx;

	str = ft_strnew(BUFF_SIZE);
	buff = ft_strnew(BUFF_SIZE);
	while ((indx = read(fd, buff, BUFF_SIZE)))
	{
		if (chk_rd(&str, buff, line, indx))
		{
			free(str);
			str = 0;
			return (1);
		}
		tmp = str;
		str = ft_strjoin(str, buff);
		free(tmp);
	}
	return (0);
}
