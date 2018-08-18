/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 13:29:42 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/10 16:19:37 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int pow;

	pow = 1;
	i = 1;
	if (power <= 0)
	{
		return (0);
	}
	else
	{
		while (i <= power)
		{
			pow = pow * nb;
			i++;
		}
		return (pow);
	}
}
