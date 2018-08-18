/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 01:17:11 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 18:11:52 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *a;
	t_list *b;

	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		a = *begin_list;
		while (a->next)
			a = a->next;
		b = ft_create_elem(data);
		a->next = b;
	}
}
