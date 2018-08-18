/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 14:19:31 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/10 14:42:01 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else
	{
		while (index > 1)
		{
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		}
		return (index);
	}
}
