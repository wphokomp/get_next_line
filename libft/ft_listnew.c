/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:05:08 by wphokomp          #+#    #+#             */
/*   Updated: 2018/01/11 17:24:57 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_listnew(int size)
{
	char **ret;

	ret = (char**)malloc(sizeof(ret) * (size + 1));
	if (ret == NULL)
		return (NULL);
	while (size != -1)
	{
		ret[size] = 0;
		size--;
	}
	return (ret);
}
