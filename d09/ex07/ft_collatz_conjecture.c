/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 00:59:17 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/16 01:06:43 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base % 2 == 0)
		return (1 + ft_collarz_conjecture(base / 2));
	else if (base % 2 == 1)
		return (1 + ft_collarz_conjecture((base * 3) + 1));
	else if (base == 1)
		return (0);
}
