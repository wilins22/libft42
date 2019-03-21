/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 14:41:14 by wiljean-          #+#    #+#             */
/*   Updated: 2019/02/26 14:41:30 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 && (*s1 == *s2))
		{
			s1 += 1;
			s2 += 1;
		}
		if (!(*s1 - *s2))
			return (1);
	}
	return (0);
}
