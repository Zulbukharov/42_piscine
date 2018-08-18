/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 14:36:20 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/14 20:22:59 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printer(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	if (argc > 1)
	{
		while (argc > index)
		{
			printer(argv[index]);
			ft_putchar('\n');
			index++;
		}
	}
	else
		return (0);
}
