/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 10:14:18 by wphokomp          #+#    #+#             */
/*   Updated: 2017/11/29 10:14:24 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mem_realloc(char *old, size_t size)
{
	char	*new;

	new = ft_strnew(size);
	ft_memcpy(new, old, ft_strlen(old));
	ft_memdel((void **)&old);
	return (new);
}
