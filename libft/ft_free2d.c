/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:04:02 by wphokomp          #+#    #+#             */
/*   Updated: 2017/12/11 15:04:03 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free2d(void **arr)
{
	int i;

	i = ft_strlen_point((char**)arr);
	if (i == 0 && arr)
		free(arr);
	if (i == 0)
		return ;
	while (i > -1)
	{
		free(arr[i]);
		arr[i] = NULL;
		i--;
	}
	free(arr);
}
