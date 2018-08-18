# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_print_comb2                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/08 19:16:37 by azulbukh          #+#    #+#              #
/*   Updated: 2018/02/08 23:30:06 by azulbukh         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char	first;
	char	second;
	int		a;

	a = 0;
	while (++a < 10000)
	{
		first = a / 100;
		second = a % 100;
		if (first < second)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + first / 10);
			ft_putchar(48 + first % 10);
			ft_putchar(' ');
			ft_putchar(48 + second / 10);
			ft_putchar(48 + second % 10);
		}
	}
}
