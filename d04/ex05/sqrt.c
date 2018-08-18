/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:56:36 by azulbukh          #+#    #+#             */
/*   Updated: 2018/04/07 17:04:48 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CEILING_POS(X) ((X-(int)(X)) > 0 ? (int)(X+1) : (int)(X))
#include <stdio.h>
#include <stdlib.h>

int		ft_ceil(float x)
{
	if ((x - (int)(x)) > 0)
		return ((int)(x + 1));
	return ((int)(x));
}

float squareRoot(float n)
{
  /*We are using n itself as initial approximation
   This can definitely be improved */
  float x = n;
  float y = 1;
  float e = 0.000001; /* e decides the accuracy level*/
  while(x - y > e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}

int		main(int ac, char **av)
{
	printf("%d", ft_ceil(squareRoot(atoi(av[1]))));
	return (0);
}

