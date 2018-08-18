/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_user.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 23:43:55 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/25 23:54:01 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

int		find_by_name(char *s1, char *s2)
{
	printf("string 1 %s\n", s1);
	printf("string 2 %s\n", s2);
	while(*s1 && *s2)
	{
		if (*s1 - *s2 > 0)
			return (-1);
		else if (*s1 - *s2 < 0)
			return (-1);
		s1++;
		s2++;
	}
	return (1);
}

void	find_user(list *head, char *name)
{
	list *current = head;
	int i = 0;

	while (current)
	{
		i++;
		if (find_by_name(current->name, name) == 0)
			printf("index of %s is %d\n", name, i);
		current = current->next;
	}

}
