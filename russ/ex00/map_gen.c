/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:46:27 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/27 18:46:29 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"
#include <stdio.h>

void	place_square(int **m, int *cords, int *bg, char *old)
{
	int c;
	int r;
	int c_x;
	int r_x;
	int i;

    c_x = bg[1];
    r_x = bg[2];
    i = bg[0];
	printf("%d\n", cords[1]);
	r = 0;
	while (r < cords[0])
	{
		c = 0;
		while (c < cords[1])
		{
			if  (c== c_x && r_x == r)
			{
				while (i > 0)
				{
					printf("%c", old[2]);
					i--;
				}
				c = c + bg[0] - 1;
				i = bg[0];
				if (r_x < (bg[2] + bg[0] - 1))
					r_x++;
			}
			else if (m[r][c] == 0)
				printf("%c", old[1]);
			else
				printf("%c", old[0]);
			c++;
		}
		r++;
		printf("\n");
	}
}

int		min_plus_one(int a, int b, int c)
{
	int temp;
	int min;

	temp = (a < b)    ? a : b;
    min =  (c < temp) ? c : temp;
	return (min + 1);
}

int		**max_squad(int **m, int *cords, char *a)
{
	printf("row: %d col: %d\n", cords[0], cords[1]);
	int c;
	int r;
	int bg[3];

	bg[0] = 0;
	r = 1;
	while (r < cords[0])
	{
		c = 1;
		while (c < cords[1])
		{
			if (m[r][c])
				m[r][c] = min_plus_one(m[r - 1][c], m[r - 1][c - 1], m[r][c - 1]);
			if (m[r][c] > bg[0])
			{
				bg[0] = m[r][c];
				bg[1] = c - bg[0] + 1;
				bg[2] = r - bg[0] + 1;
				printf("%d c: %d, r: %d\n", bg[0], bg[1], bg[2]);
			}
			c++;
		}
		r++;
	}
	place_square(m, cords, bg, a);
	return (m);
}

void	map_gen(int row, int col, char *fn)
{
	int **map;
	map=(int **)malloc(row * sizeof(int *));
	for(int i=0;i<row;i++)
    	map[i] = malloc(col*sizeof(int));
	int fd;
	char buf[1];
	int row_i;
	int col_i;
	char a[3];

	row_i = 0;
	col_i = 0;
	fd = open(fn, O_RDONLY);
	while (read(fd, buf, 1))
	{
		if (*buf == '\n')
			break ;
		if (*buf >= 48 && *buf <= 57)
			*buf = *buf ;
		else
		{
			if (!a[0])
				a[0] = *buf;
			else if (!a[1])
				a[1] = *buf;
			else if (!a[2])
				a[2] = *buf;
			else
				continue ;
		}
	}
	while (read(fd, buf, 1))
	{
		printf("%c", *buf);
		if (*buf == '\n')
		{
			row_i++;
			col_i = 0;
		}
		else
		{
			if (*buf == a[0])
				map[row_i][col_i] = 1;
			else if (*buf == a[1])
				map[row_i][col_i] = 0;
			col_i++;
		}
	}
	
	int cords[2] = {row, col};
	map = max_squad(map, cords, a);
}

