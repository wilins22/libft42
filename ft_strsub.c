/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:43:10 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/06 23:59:44 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*dest;

	i = start;
	j = 0;
	if (!s || !(dest = ft_strnew(len)))
		return (NULL);
	while (i < len + start)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	return (dest);
}
