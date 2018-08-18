/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 16:22:32 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/10 21:59:37 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;
	int c;

	c = 1;
	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	else
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				c = 0;
				break ;
			}
			else
			{
				i++;
			}
		}
		return (c);
	}
}
