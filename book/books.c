/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   books.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 20:39:00 by azulbukh          #+#    #+#             */
/*   Updated: 2018/03/30 21:55:52 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void	find_user(list *head, char *name);
list	*create_elem(char *name, int year);
void	push_to_front(list **head, char *name, int year);
void	push_to_end(list *head, char *name, int year);

void	print(list **head)
{
	list *current = *head;
	while(current)
	{
		printf("point: %p value: %s\n", current, current->name);
		current = current->next;
	}
}

int		main(int argc, char **argv)
{
	list *books;

	books = create_elem("ABL", 2);
	books->next = create_elem("HA", 3);
	books->next->next = create_elem("MDE", 4);
	push_to_front(&books, "na", 5);
	push_to_end(books, "last", 6);
	printf("1'st book: %p\n", books);
	printf("all books?: %p\n", &books);
	find_user(books, argv[1]);
	print(&books);
	return (0);
}
