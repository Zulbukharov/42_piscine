/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 20:54:42 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/25 22:08:15 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

list *create_elem(char *name, int year);

void	push_to_front(list **head, char *name, int year)
{
	list *new;

	new = create_elem(name, year);
	new->next = *head;
	printf("new: %p\n", new);
	printf("head: %p\n", head);
	*head = new;
	
}
