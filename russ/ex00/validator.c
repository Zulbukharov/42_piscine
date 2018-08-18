/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:24:45 by yzavhoro          #+#    #+#             */
/*   Updated: 2018/02/27 14:17:52 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"
#include <stdio.h>

int		atoi_demo(char *str);

int		if_valid_p3(int nb, char *argv, int i)
{
	int		fd;
	int		mas[2];
	char	buf[1];

	mas[0] = 0;
	fd = open(argv, O_RDONLY);
	while (i-- >= 0)
		read(fd, buf, 1);
	while (buf[0] != '\n')
	{
		read(fd, buf, 1);
		mas[0]++;
	}
	if (nb == 1)
		return (mas[0]);
	mas[1] = mas[0];
	mas[0] = 0;
	while (read(fd, buf, 1))
	{
		if (buf[0] != '\n')
			mas[0]++;
		if (buf[0] == '\n' && mas[0] != mas[1])
			return (0);
		else if (buf[0] == '\n' && nb-- > 2)
			mas[0] = 0;
	}
	return (mas[0]);
}

int		if_valid_p2(int fd, int nb, char dot, char obst)
{
	char	buff[1];
	int		lns;

	lns = 0;
	while (read(fd, buff, 1))
	{
		if (buff[0] != '\n' && buff[0] != dot && buff[0] != obst)
			return (0);
		if (buff[0] == '\n')
			lns++;
	}
	if (lns != nb)
		return (0);
	return (lns);
}

int		*if_valid(char *argv, int i, int fd, int *a)
{
	char buf[1];
	char *first;
	char symb[2];

	first = (char*)malloc(sizeof(char));
	while (buf[0] != '\n')
	{
		read(fd, buf, 1);
		first[i] = buf[0];
		first[i + 1] = (char)malloc(sizeof(char));
		i++;
	}
	first[i] = '\0';
	symb[0] = first[i - 4];
	symb[1] = first[i - 3];
	if (atoi_demo(first))
       	if (if_valid_p2(fd, atoi_demo(first), symb[0], symb[1]))
		{
			close(fd);
			a[1] = if_valid_p3(atoi_demo(first), argv, i);
			a[0] = atoi_demo(first);
		}
	return (a);
}
///////////////////////////////////////////////

int		min_plus_one(int a, int b, int c)
{
	int temp;
	int min;

	temp = (a < b)    ? a : b;
    min =  (c < temp) ? c : temp;
	return (min + 1);
}

int		**max_squad(int **map, int col, int row)
{
	int c;
	int r;

	r = 1;
	while (r < row)
	{
		c = 1;
		while (c < col)
		{
			if (map[r][c])
				map[r][c] = min_plus_one(map[r - 1][c], map[r - 1][c - 1], map[r][c - 1]);
			c++;
		}
		r++;
	}

	return (map);
}

void	map_gen(int row, int col, char *fn)
{
	int **map;
	map=(int **)malloc(row * sizeof(int *));
	for(int i=0;i<row;i++)
    	map[i] = malloc(col*sizeof(int));
	//map = (i	nt**)malloc(sizeof(int) * row * col);
	int fd;
	char buf[1];
	int row_i;
	int col_i;
	char a;
	char b;

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
			if (!a)
				a = *buf;
			else if (!b)
				b = *buf;
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
			if (*buf == a)
				map[row_i][col_i] = 1;
			else if (*buf == b)
				map[row_i][col_i] = 0;
			col_i++;
		}
	}

	map = max_squad(map, row, col);

	for (int o = 0; o < row; o++)
	{
		for (int t = 0; t < col; t++)
		{
			printf("%d", map[o][t]);
		}
		printf("\n");
	}
}
/////////////////////////////////////////////
int		main(int argc, char **argv)
{
	int i;
	int a[2];
	int fd;
	int j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		fd = open(argv[j], O_RDONLY);
		if_valid(argv[j], i, fd, a);
		if (a[1] == 0)
			printf("error: invalid map (idi nahuj)\n");
		else
			map_gen(a[0], a[1], argv[j]);
		j++;
	}
	return (0);
}
