/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 14:24:45 by yzavhoro          #+#    #+#             */
/*   Updated: 2018/02/27 16:01:44 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"
#include <stdio.h>

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
	{
		if (if_valid_p2(fd, atoi_demo(first), symb[0], symb[1]))
		{
			close(fd);
			a[1] = if_valid_p3(atoi_demo(first), argv, i);
			a[0] = atoi_demo(first);
		}
	}
	return (a);
}

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
			printf("\n");
		j++;
	}
	return (0);
}
