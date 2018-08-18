/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:40:53 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/15 17:54:01 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *count;
	int start;
	int i;

	i = 0;
	start = min;
	count = malloc(max - min);
	if (min < max)
	{
		while (start < max)
		{
			count[i] = start;
			start++;
			i++;
		}
		return (count);
	}
	else
		return (0);
}
