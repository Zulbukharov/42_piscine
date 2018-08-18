/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 16:11:25 by yzavhoro          #+#    #+#             */
/*   Updated: 2018/04/08 22:18:36 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

int		if_valid_p4(int nb, int fd, int *mas, char *buf)
{
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
	if (nb > 1)
		mas[0] = if_valid_p4(nb, fd, mas, buf);
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
	close(fd);
	return (lns);
}

int		*if_valid(char *argv, int i, int fd, int *a)
{
	char	buf[1];
	char	*first;
	char	symb[2];

	a[0] = 0;
	a[1] = 0;
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
	a[0] = atoi_demo(first);
	if (a[0])
		if (if_valid_p2(fd, atoi_demo(first), symb[0], symb[1]))
			a[1] = if_valid_p3(atoi_demo(first), argv, i);
	close(fd);
	return (a);
}
