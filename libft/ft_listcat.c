/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 14:54:55 by wphokomp          #+#    #+#             */
/*   Updated: 2017/12/11 15:04:44 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_listcat(char **list, char *str)
{
	char	**ret;
	int		len;
	int		i;

	if (list == NULL || str == NULL)
		return (NULL);
	len = ft_strlen_point(list);
	ret = (char **)malloc(sizeof(ret) * (len + 2));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (list[i])
	{
		ret[i] = ft_strnew(ft_strlen(list[i]));
		ft_strcpy(ret[i], list[i]);
		i++;
	}
	ret[i] = ft_strnew(ft_strlen(str));
	ft_strcpy(ret[i], str);
	ret[i + 1] = 0;
	return (ret);
}
