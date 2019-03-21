/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:33:02 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/06 14:25:11 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*mem;
	int		len;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	mem = malloc(len + 1);
	if (mem != NULL)
	{
		while (s[i])
		{
			mem[i] = (*f)(s[i]);
			i++;
		}
		mem[i] = '\0';
	}
	return (mem);
}
