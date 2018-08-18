/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 19:17:32 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/26 15:02:05 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define BUF_SIZE 1

int		ft_display_file(char *fn)
{
	int		fd;
	char	buf[BUF_SIZE];

	fd = open(fn, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		ft_putchar('\n');
		return (1);
	}
	while (read(fd, buf, BUF_SIZE) > 0)
	{
		write(1, &buf, BUF_SIZE);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		ft_putchar('\n');
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc == 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("Too many arguments.");
		ft_putchar('\n');
	}
	return (0);
}
