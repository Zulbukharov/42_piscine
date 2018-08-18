/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 01:17:11 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/24 18:51:49 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!*begin_list)
		*begin_list = ft_create_elem(data);
	else
	{
		t_list *a = *begin_list;
		while (a->next)
			a = a->next;
		t_list *b = ft_create_elem(data);
		a->next = b;
	}
}

void print(t_list *begin_list)
{
	while (begin_list)
	{
		printf("%s", begin_list->data);
		begin_list = begin_list->next;
	}
}
