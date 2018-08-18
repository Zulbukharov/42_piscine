/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:56:42 by azulbukh          #+#    #+#             */
/*   Updated: 2018/04/07 16:53:26 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_sqrt(int nb)
{
	float res;
	float i;

	res = 0;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (res <= nb)
		{
			if (res == nb)
			{
				return (i);
			}
			i++;
			res = i * i;
		}
	}
}

int		main(int ac, char **av)
{
	printf("%d", ft_sqrt(atoi(av[1])));
	return (0);
}
