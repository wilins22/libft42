/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 15:09:21 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/06 14:12:04 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *t;

	t = (unsigned char *)s;
	while (n--)
	{
		if (*t == (unsigned char)c)
			return ((void *)t);
		t++;
	}
	return (NULL);
}
