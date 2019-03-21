/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:39:49 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/06 14:35:05 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*mem;
	unsigned int		len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	mem = malloc(len + 1);
	if (mem != NULL)
	{
		while (s[i])
		{
			mem[i] = (*f)(i, s[i]);
			i++;
		}
		mem[i] = '\0';
	}
	return (mem);
}
