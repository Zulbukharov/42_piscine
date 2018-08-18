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

int		min_plus_one(int a, int b, int c)
{
	int	temp;
	int	min;

	temp = (a < b) ? a : b;
	min = (c < temp) ? c : temp;
	return (min + 1);
}

int		**max_squad(int **m, int *cords, char *a)
{
	int c;
	int r;
	int bg[3];

	bg[0] = 0;
	r = 0;
	while (++r < cords[0])
	{
		c = 0;
		while (++c < cords[1])
		{
			if (m[r][c])
				m[r][c] = min_plus_one(m[r - 1][c],
				m[r - 1][c - 1], m[r][c - 1]);
			if (m[r][c] > bg[0])
			{
				bg[0] = m[r][c];
				bg[1] = c - bg[0] + 1;
				bg[2] = r - bg[0] + 1;
			}
		}
	}
	place_square(m, cords, bg, a);
	return (m);
}

int		**fill_map(int **map, int fd, char *a)
{
	char	buf[1];
	int		r;
	int		c;

	r = 0;
	c = 0;
	while (read(fd, buf, 1))
	{
		if (*buf == '\n')
		{
			r++;
			c = 0;
		}
		else
		{
			if (*buf == a[0])
				map[r][c] = 1;
			else if (*buf == a[1])
				map[r][c] = 0;
			c++;
		}
	}
	return (map);
}

char	*make_a(int fd, char *a)
{
	char buf[1];

	while (read(fd, buf, 1))
	{
		if (*buf == '\n')
			break ;
		if (*buf >= 48 && *buf <= 57)
			*buf = *buf;
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
	return (a);
}

void	map_gen(int row, int col, char *fn)
{
	int		**map;
	int		fd[2];
	char	*a;
	int		cords[2];

	fd[1] = -1;
	cords[0] = row;
	cords[1] = col;
	a = malloc(sizeof(char) * 3 + 1);
	map = (int **)malloc(row * sizeof(int *));
	while (++fd[1] < row)
	{
		map[fd[1]] = malloc(col * sizeof(int));
	}
	fd[0] = open(fn, O_RDONLY);
	a = make_a(fd[0], a);
	map = fill_map(map, fd[0], a);
	map = max_squad(map, cords, a);
	free(map);
}
