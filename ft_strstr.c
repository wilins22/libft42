/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 11:02:59 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/09 19:28:38 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *largestring, const char *smallstring)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!smallstring[0])
		return ((char *)&largestring[i]);
	while (largestring[i])
	{
		while ((largestring[i + j] == smallstring[j]) && smallstring[j])
			j += 1;
		if (!smallstring[j])
			return ((char *)&largestring[i]);
		j = 0;
		i += 1;
	}
	return (NULL);
}
