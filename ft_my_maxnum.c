/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_maxnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 19:44:07 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/09 19:45:32 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_my_maxnum(int *arr, int len)
{
	int		max;
	int		i;

	i = 0;
	max = -2147483648;
	if (arr == NULL)
		return (0);
	while (i < len)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			i++;
		}
		else
			i++;
	}
	return (max);
}
