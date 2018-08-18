/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:27:45 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/21 22:50:30 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*tmp;
	int		i;

	i = 2;
	if (ac == 1)
		return (0);
	list = ft_create_elem(av[1]);
	while (av[i])
	{
		tmp = list;
		list = ft_create_elem(av[i]);
		list->next = tmp;
		i++;
	}
	return (list);
}
