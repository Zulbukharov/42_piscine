/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atlekbai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 20:56:42 by atlekbai          #+#    #+#             */
/*   Updated: 2018/02/25 18:19:59 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

char	*insert_to_arr(int j, char *s, int x, int y)
{
	int i;

	i = 0;
	while (i++ < x - 1)
	{
		if (j == 1 && i == 1)
			s[x * (j - 1) + i - 1] = 'A';
		else if ((j == y && i == 1) || (j == 1 && i == x - 1))
			s[x * (j - 1) + i - 1] = 'C';
		else if (j == y && i == x - 1)
			s[x * (j - 1) + i - 1] = 'A';
		else if (j == 1 || j == y || i == 1 || i == x - 1)
			s[x * (j - 1) + i - 1] = 'B';
		else
			s[x * (j - 1) + i - 1] = ' ';
	}
	if (x - 1 > 0 && y > 0)
		s[x * (j - 1) + i - 1] = '\n';
	return (s);
}

char	*rush04(int x, int y)
{
	int		j;
	char	*s;

	s = (char*)malloc(++x * y + 1);
	j = 0;
	while (j++ < y)
	{
		s = insert_to_arr(j, s, x, y);
	}
	s[x * y] = 0;
	return (s);
}
