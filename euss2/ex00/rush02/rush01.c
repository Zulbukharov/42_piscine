/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atlekbai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 19:10:05 by atlekbai          #+#    #+#             */
/*   Updated: 2018/02/25 18:25:07 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

char	*insert_to_arr_01(int j, char *s, int x, int y)
{
	int i;

	i = 0;
	while (i++ < x - 1)
	{
		if (j == 1 && i == 1)
			s[x * (j - 1) + i - 1] = '/';
		else if ((j == y && i == 1) || (j == 1 && i == x - 1))
			s[x * (j - 1) + i - 1] = '\\';
		else if (j == y && i == x - 1)
			s[x * (j - 1) + i - 1] = '/';
		else if (j == 1 || j == y || i == 1 || i == x - 1)
			s[x * (j - 1) + i - 1] = '*';
		else
			s[x * (j - 1) + i - 1] = ' ';
	}
	if (x - 1 > 0 && y > 0)
		s[x * (j - 1) + i - 1] = '\n';
	return (s);
}

char	*rush01(int x, int y)
{
	int		j;
	char	*s;

	s = (char*)malloc(++x * y + 1);
	j = 0;
	while (j++ < y)
	{
		s = insert_to_arr_01(j, s, x, y);
	}
	s[x * y] = 0;
	return (s);
}
