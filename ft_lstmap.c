/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiljean- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 00:35:11 by wiljean-          #+#    #+#             */
/*   Updated: 2019/03/07 00:35:33 by wiljean-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*fresh;

	fresh = f(lst);
	new = fresh;
	while (lst->next)
	{
		lst = lst->next;
		if (!(fresh->next = f(lst)))
		{
			free(fresh->next);
			return (NULL);
		}
		fresh = fresh->next;
	}
	return (new);
}
