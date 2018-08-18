/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:22:34 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 16:24:48 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rushs.h"

void	rush01(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j++ < y)
	{
		i = 0;
		while (i++ < x)
		{
			if (j == 1 && i == 1)
				ft_putchar('/');
			else if ((j == 1 && i == x) || (j == y && i == 1))
				ft_putchar('\\');
			else if (j == y && i == x)
				ft_putchar('/');
			else if ((j == 1 || j == y) || (i == 1 || i == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		if (x > 0 && y > 0)
			ft_putchar('\n');
	}
}
