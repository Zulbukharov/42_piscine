/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atlekbai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 20:56:42 by atlekbai          #+#    #+#             */
/*   Updated: 2018/02/24 22:40:15 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*
char	*insert_to_arr(int i, char *s, int x, int j, int y)
{
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
	printf("%s", s);
	return (s);	
}
*/


char	*rush04(int x, int y)
{
	int		i;
	int		j;
	char	*s;

	s = (char*)malloc(++x * y + 1);
	j = 0;
	while (j++ < y)
	{
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
		//s = insert_to_arr(i, s, x, j, y);
		i++;
		if (x - 1 > 0 && y > 0)
			s[x * (j - 1) + i - 1] = '\n';
	}
	s[x * y] = 0;
	return (s);
}
