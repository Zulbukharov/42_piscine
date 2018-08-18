/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:40:58 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 21:02:07 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
#define SIZE 10

int		ft_is_sort(int *tab, int length, int(*f)(int, int));

int		cmp(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	int a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("array is: %d", ft_is_sort(a, SIZE, &cmp));
	return (0);
}
