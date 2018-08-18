/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:26:16 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 18:04:51 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	list_strcmp(t_list *begin, char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if ((!s[i] && !begin) || (!s[i] && !((char*)begin->data)[n]))
		return (0);
	if (!begin)
		return (1);
	while (s[i] == ((char*)begin->data)[n])
	{
		i++;
		n++;
		if (n == 1)
		{
			begin = begin->next;
			if (!begin && !s[i])
				return (0);
			else if (!begin)
				return (1);
			n = 0;
			continue ;
		}
	}
	return (1);
}
