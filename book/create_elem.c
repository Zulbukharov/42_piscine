/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 20:37:21 by azulbukh          #+#    #+#             */
/*   Updated: 2018/03/30 21:59:09 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

list	*create_elem(char *data, int year)
{
	list *node;
	
	node = malloc(sizeof(list));
	node->name = data;
	node->year = year;
	node->next = NULL;

	return (node);
}
