/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:24:17 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/26 14:59:37 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "ft.h"

#define BUF_SIZE 4096

void	ft_putstr_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

int		main()
{
	int fd; // file descriptor
	int ret; // return bytes count
	char buf[BUF_SIZE]; // buffer for read

	// fd = open("42", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	//ft_putnbr(fd);
	//ft_putstr_fd(fd, "HELLO");
	
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putnbr(ret);
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	return (0);
}
