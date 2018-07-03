/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_del_el.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:04:15 by wphokomp          #+#    #+#             */
/*   Updated: 2018/01/19 16:55:24 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_del_el(char **list, char *el)
{
	int		i;
	int		f;

	i = 0;
	f = 0;
	while (list[i])
	{
		if (ft_strcmp(list[i], el) == 0)
		{
			f = 1;
			free(list[i]);
			list[i] = NULL;
		}
		if (f)
		{
			list[i] = list[i + 1];
		}
		i++;
	}
	if (f)
	{
		free(list[i]);
		list[i] = NULL;
	}
	return (f);
}
