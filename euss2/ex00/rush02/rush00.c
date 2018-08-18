/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atlekbai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 20:56:42 by atlekbai          #+#    #+#             */
/*   Updated: 2018/02/25 16:17:35 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

char	*rush00(int x, int y)
{
	int		i;
	int		j;
	char	*q;

	q = (char*)malloc(++x * y + 1);
	j = 0;
	while (j++ < y)
	{
		i = 0;
		while (i++ < x - 1)
		{
			if ((i == 1 || i == x - 1) && (j == 1 || j == y))
				q[x * (j - 1) + i - 1] = 'o';
			else if (j == 1 || j == y)
				q[x * (j - 1) + i - 1] = '-';
			else if ((i == 1 || j == 1) || (i == x - 1 || j == y))
				q[x * (j - 1) + i - 1] = '|';
			else
				q[x * (j - 1) + i - 1] = ' ';
		}
		if (x - 1 > 0 && y > 0)
			q[x * (j - 1) + i - 1] = '\n';
	}
	q[x * y] = 0;
	return (q);
}