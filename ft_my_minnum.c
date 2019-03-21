/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_my_minnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/09 19:46:19 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/09 19:46:47 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_my_minnum(int *arr, int len)
{
	int		min;
	int		i;

	i = 0;
	min = 2147483647;
	if (arr == NULL)
		return (0);
	while (i < len)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			i++;
		}
		else
			i++;
	}
	return (min);
}
