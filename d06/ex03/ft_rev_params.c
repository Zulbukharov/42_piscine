/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 17:21:55 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/14 20:24:22 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putst(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int index;

	index = argc;
	if (argc > 1)
	{
		while ((index) > 1)
		{
			ft_putstr(argv[index - 1]);
			ft_putchar('\n');
			index--;
		}
	}
	else
		return (0);
}
