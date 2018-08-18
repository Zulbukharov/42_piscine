/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 16:09:57 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 20:51:58 by obamzuro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "ft_list.h"
#define BUF_SIZE 1

void	list_filling(int (*arr)[4], char **buf, t_list **beg)
{
	*buf = malloc(BUF_SIZE + 1);
	while (++((*arr)[1]) < BUF_SIZE + 1)
	{
		(*buf)[(*arr)[1]] = 0;
	}
	while (read(0, *buf, BUF_SIZE))
	{
		if ((*buf)[0] == '\n')
		{
			(*arr)[3] = 1;
			(*arr)[0]++;
		}
		if ((*arr)[3] == 0)
			(*arr)[2]++;
		ft_list_push_back(beg, *buf);
		*buf = malloc(BUF_SIZE + 1);
		(*arr)[1] = -1;
		while (++((*arr)[1]) < BUF_SIZE + 1)
		{
			(*buf)[(*arr)[1]] = 0;
		}
	}
}

void	reshatel(int (*arr)[4], char **rushs, t_list **beg,
		char *(*f[5])(int, int))
{
	(*arr)[1] = 0;
	(*arr)[3] = 0;
	while ((*arr)[1] < 5)
	{
		rushs[(*arr)[1]] = (*f[(*arr)[1]])((*arr)[2], (*arr)[0]);
		if (!list_strcmp(*beg, rushs[(*arr)[1]]))
		{
			if ((*arr)[3])
				ft_putstr(" || ");
			ft_putstr("[rush-0");
			ft_putnbr((*arr)[1]);
			ft_putstr("] [");
			ft_putnbr((*arr)[2]);
			ft_putstr("] [");
			ft_putnbr((*arr)[0]);
			ft_putstr("]");
			(*arr)[3] = 1;
		}
		(*arr)[1]++;
	}
	if (!(*arr)[3])
		ft_putstr("aucune");
	ft_putstr("\n");
}

void	clear(t_list **begin)
{
	t_list *a;

	while (*begin)
	{
		a = (*begin)->next;
		free(*begin);
		*begin = a;
	}
}

int		main(void)
{
	int		arr[4];
	char	*buf;
	char	*rushs[5];
	char	*(*f[5])(int, int);
	t_list	*beg;

	beg = 0;
	f[0] = rush00;
	f[1] = rush01;
	f[2] = rush02;
	f[3] = rush03;
	f[4] = rush04;
	arr[0] = 0;
	arr[1] = -1;
	arr[2] = 0;
	arr[3] = 0;
	list_filling(&arr, &buf, &beg);
	if (beg == 0)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	reshatel(&arr, rushs, &beg, f);
	clear(&beg);
	return (0);
}
