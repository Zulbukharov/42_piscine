/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:35:45 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/21 17:42:43 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *temp;

	i = 0;
	temp = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		temp[i] = f(tab[i]);
		i++;
	}
	return (temp);
}
