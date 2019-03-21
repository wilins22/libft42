/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:12:45 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/06 13:52:28 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srce;
	size_t	i;

	dest = (char *)dst;
	srce = (char *)src;
	i = 0;
	while (n > 0)
	{
		dest[i] = srce[i];
		i++;
		n--;
	}
	return (dest);
}
