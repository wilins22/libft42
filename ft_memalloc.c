/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 13:08:52 by wiljean-          #+#    #+#             */
/*   Updated: 2019/02/26 13:09:09 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (unsigned char *)malloc(size);
		if (!ptr)
			return (NULL);
		while (size)
			ptr[--size] = 0;
	}
	return ((void *)ptr);
}
