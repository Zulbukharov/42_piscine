/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:00:54 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 23:20:03 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	error(int code)
{
	if (code == 1)
		ft_putstr("Stop : division by zero");
	else
		ft_putstr("Stop : modulo by zero");
}

void	he(char **argv)
{
	if (argv[2][0] == '+')
		sum(argv[1], argv[3], &ft_atoi);
	else if (argv[2][0] == '-')
		diff(argv[1], argv[3], &ft_atoi);
	else if (argv[2][0] == '/')
		div(argv[1], argv[3], &ft_atoi);
	else if (argv[2][0] == '*')
		comp(argv[1], argv[3], &ft_atoi);
	else if (argv[2][0] == '%')
		mod(argv[1], argv[3], &ft_atoi);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_validate(argv[2]) == 1)
	{
		if (!(ft_atoi(argv[3])) && argv[2][0] == '/')
			error(1);
		else if (!(ft_atoi(argv[3])) && argv[2][0] == '%')
			error(0);
		else
			he(argv);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
	return (0);
}
