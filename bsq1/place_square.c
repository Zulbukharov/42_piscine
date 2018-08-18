/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 14:53:42 by azulbukh          #+#    #+#             */
/*   Updated: 2018/04/01 18:01:14 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		printx(char *old, int (*arr)[4], int *bg, int cr)
{
	while ((*arr)[2] > 0)
	{
		write(1, &old[2], 1);
		((*arr)[2])--;
	}
	cr = cr + bg[0] - 1;
	(*arr)[2] = bg[0];
	if ((*arr)[1] < (bg[2] + bg[0] - 1))
		(*arr)[1] = (*arr)[1] + 1;
	return (cr);
}

void	print_1square(int *l, char old)
{
	write(1, &old, 1);
	*l = 0;
}

void	place_square(int **m, int *cords, int *bg, char *old)
{
	int cr[2];
	int var[4];

	var[0] = bg[1];
	var[1] = bg[2];
	var[2] = bg[0];
	cr[0] = -1;
	if (cords[0] == 1 || cords[1] == 1 || bg[0] == 1)
		var[3] = 1;
	while (++cr[0] < cords[0])
	{
		cr[1] = -1;
		while (++cr[1] < cords[1])
		{
			if (cr[1] == var[0] && var[1] == cr[0] && bg[0] > 1)
				cr[1] = printx(old, &var, bg, cr[1]);
			else if (var[3] == 1 && m[cr[0]][cr[1]] != 0)
				print_1square(&var[3], old[2]);
			else if (m[cr[0]][cr[1]] == 0)
				write(1, &old[1], 1);
			else
				write(1, &old[0], 1);
		}
		ft_putchar('\n');
	}
}
