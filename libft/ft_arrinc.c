/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrinc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 20:42:57 by wphokomp          #+#    #+#             */
/*   Updated: 2017/11/23 20:45:02 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arrinc(char ***a, char *str, int len)
{
	int		i;
	char	**new;
	char	**arr;

	arr = *a;
	new = ft_strnew_point(len + 2);
	i = 0;
	while (i < len)
	{
		new[i] = arr[i];
		i++;
	}
	new[len] = ft_strdup(str);
	new[len + 1] = NULL;
	if (a && arr)
		free(*a);
	*a = new;
}
