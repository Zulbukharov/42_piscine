/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atlekbai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 19:05:13 by atlekbai          #+#    #+#             */
/*   Updated: 2018/02/24 22:17:43 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
char*	rush04(int x, int y);
int		ft_atoi(char *s);

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("");
	else
		printf("%s", rush04(ft_atoi(argv[1]), ft_atoi(argv[2])));
	return (0);
}
