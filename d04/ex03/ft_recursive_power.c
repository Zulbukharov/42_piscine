/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:05:58 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/10 16:40:29 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power <= 0)
	{
		return (0);
	}
	else
	{
		while (power != 1)
		{
			return (nb * (ft_recursive_power(nb, power - 1)));
		}
		return (nb);
	}
}
