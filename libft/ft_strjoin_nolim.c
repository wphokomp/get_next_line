/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_nolim.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 12:00:44 by wphokomp          #+#    #+#             */
/*   Updated: 2017/11/28 12:54:07 by wphokomp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_nolim(char del, char *s1, ...)
{
	char	*new;
	char	*nxt;
	va_list	args;
	int		i;

	if (!s1)
		return (NULL);
	i = 0;
	va_start(args, s1);
	nxt = s1;
	new = ft_strnew(ft_strlen(s1));
	while (1)
	{
		while (*nxt)
			new[i++] = *nxt++;
		nxt = va_arg(args, char *);
		if (del && nxt)
			new[i++] = del;
		if (!nxt)
			break ;
		new = ft_mem_realloc(new, ft_strlen(new) + ft_strlen(nxt) + 1);
	}
	new[i] = '\0';
	va_end(args);
	return (new);
}
