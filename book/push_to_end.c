/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_end.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 22:27:09 by azulbukh          #+#    #+#             */
/*   Updated: 2018/03/30 21:45:35 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
list	*create_elem(char *name, int year);

void	push_to_end(list *head, char *name, int year)
{
	list *current;
	list *new;

	new = create_elem(name, year);
	current = head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
}
