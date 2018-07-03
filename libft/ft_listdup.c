/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 15:04:53 by wphokomp          #+#    #+#             */
/*   Updated: 2017/12/11 15:04:56 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_listdup(char **list)
{
	int		i;
	char	**ret;

	ret = (char**)malloc(sizeof(ret) * (ft_strlen_point(list) + 1));
	if (ret == NULL)
		return (NULL);
	ret[ft_strlen_point(list)] = 0;
	i = 0;
	while (list[i])
	{
		ret[i] = ft_strdup(list[i]);
		i++;
	}
	return (ret);
}
