/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 15:44:32 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 18:03:43 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "ft_list.h"
#define BUF_SIZE 1

int			list_strcmp(t_list *begin, char *s);
void		ft_putchar(char c);
char*		rush00(int x, int y);
char*		rush01(int x, int y);
char*		rush02(int x, int y);
char*		rush03(int x, int y);
char*		rush04(int x, int y);
void		ft_list_push_back(t_list **begin_list, void *data);
void		print(t_list *begin_list);

int main(int argc, char **argv)
{
	int		i;
	int		j;
	int		q;
	int		k;
	char*	buf;
	char*	rushs[5];
	char*	(*f[5])(int, int);
	f[0] = rush00;
	f[1] = rush01;
	f[2] = rush02;
	f[3] = rush03;
	f[4] = rush04;
	t_list *beg = 0;

	i = 0;
	q = -1;
	j = 0; k = 0; buf = malloc(BUF_SIZE + 1);
	while (++q < BUF_SIZE + 1)
	{
		buf[q] = 0;
	}
	while (read(0, buf, BUF_SIZE))
	{
		if (buf[0] == '\n')
		{
			k = 1;
			i++;
		}
		if (k == 0)
			j++;

		ft_list_push_back(&beg, buf);
		buf = malloc(BUF_SIZE + 1);
		q = -1;
		while (++q < BUF_SIZE + 1)
		{
			buf[q] = 0;
		}
	}
	print(beg);
	printf("newlines = %d\n", i);
	printf("symbols = %d\n", j);
	q = 0;
	while (q < 5)
	{
		rushs[q] = (f[q])(j, i);
		if (!list_strcmp(beg, rushs[q]))
			printf("[rush-0%d] [%d] [%d] ", q, j, i);
		q++;
	}
	printf("\n");
}
