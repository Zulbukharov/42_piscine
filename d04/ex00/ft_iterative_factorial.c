/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 11:49:52 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/10 20:48:12 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	fact = 1;
	i = 1;
	if (nb <= (-1) || nb > 12)
	{
		return (0);
	}
	else
	{
		while (i <= nb)
		{
			fact = fact * i;
			i++;
		}
		return (fact);
	}
}
