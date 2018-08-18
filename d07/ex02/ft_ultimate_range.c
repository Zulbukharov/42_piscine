/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 17:12:42 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/15 18:43:15 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *array;
	int start;

	i = 0;
	start = min;
	array = malloc(max - min);
	if (min < max)
	{
		while (start < max)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		*range = 0;
		return (0);
	}
	*range = array;
	return (i);
}
