/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 14:42:28 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/09 21:16:25 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buf;

	buf = malloc(sizeof(char) * len);
	if (buf != NULL)
	{
		ft_memcpy(buf, src, len);
		ft_memcpy(dst, buf, len);
		free(buf);
	}
	return (dst);
}
