/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:22:13 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 16:24:42 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rushs.h"

void	rush00(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j++ < y)
	{
		i = 0;
		while (i++ < x)
		{
			if ((i == 1 || i == x) && (j == 1 || j == y))
				ft_putchar('o');
			else if (j == 1 || j == y)
				ft_putchar('-');
			else if ((i == 1 || j == 1) || (i == x || j == y))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
	}
}
