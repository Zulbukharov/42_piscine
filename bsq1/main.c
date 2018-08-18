/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:55:31 by yzavhoro          #+#    #+#             */
/*   Updated: 2018/04/03 18:22:18 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prot.h"

void	if_argc(int *a, int argc, char **argv)
{
	int		j;
	int		i;
	int		fd;

	j = 1;
	while (j < argc)
	{
		i = 0;
		fd = open(argv[j], O_RDONLY);
		if (fd == -1)
			write(2, "map error\n", 10);
		else
		{
			if_valid(argv[j], i, fd, a);
			if (a[1] == 0 || a[0] == 0)
				write(2, "map error\n", 10);
			else
				map_gen(a[0], a[1], argv[j]);
			close(fd);
		}
		if (j + 1 < argc)
			write(1, "\n", 1);
		j++;
	}
}

void	if_input(int *a, int fd, int bool)
{
	int i;

	i = 0;
	if (bool)
	{
		fd = open("file_map", O_RDONLY);
		if_valid("file_map", i, fd, a);
		write(1, "\n", 1);
		if (a[1] == 0 || a[0] == 0)
			write(2, "map error\n", 10);
		else
			map_gen(a[0], a[1], "file_map");
		close(fd);
	}
	else
		write(2, "\nmap error\n", 11);
}

int		main(int argc, char **argv)
{
	int		a[2];
	int		fdbl[2];
	char	buf[1];

	fdbl[1] = 0;
	if (argc > 1)
		if_argc(a, argc, argv);
	else
	{
		fdbl[0] = open("file_map", O_WRONLY | O_TRUNC | O_CREAT, S_IRWXU);
		if (fdbl[0] == -1)
			write(2, "map error\n", 10);
		else
		{
			while ((read(0, buf, 1)))
			{
				write(fdbl[0], buf, 1);
				if (buf[0] == '\n')
					fdbl[1]++;
			}
			close(fdbl[0]);
			if_input(a, fdbl[0], fdbl[1]);
		}
	}
	return (0);
}
