/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:44:45 by azulbukh          #+#    #+#             */
/*   Updated: 2018/08/18 12:53:10 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > -1 || nb < 12)
	{
		if (nb > 1)
		{
			return (nb * ft_recursive_factorial(nb - 1));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
