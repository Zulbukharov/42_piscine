/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 21:17:33 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/08 22:42:21 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	jp_putchar(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
}

void	ft_print_comb(void)
{
	char array[3];

	array[0] = '0';
	while (array[0] <= '7')
	{
		array[1] = array[0] + 1;
		while (array[1] <= '8')
		{
			array[2] = array[1] + 1;
			while (array[2] <= '9')
			{
				jp_putchar(array[0], array[1], array[2]);
				if (array[0] == '7' && array[1] == '8' && array[2] == '9')
				{
					break ;
				}
				ft_putchar(',');
				ft_putchar(' ');
				array[2]++;
			}
			array[1]++;
		}
		array[0]++;
	}
}
