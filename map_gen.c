/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_gen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:19:46 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/26 20:19:49 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	map_gen(int row, int col, char *fn)
{
	int map[row][col];
	int fd;
	char buf[1];
	int row_i;
	int col_i;
	char a;
	char b;

	row_i = 0;
	col_i = 0;
	fd = open(fn, O_RDONLY);
	while (read(fd, buf, 1))
	{
		if (*buf == '\n')
			break ;
		if (*buf >= 48 && *buf <= 57)
			*buf = *buf ;
		else
		{
			if (!a)
				a = *buf;
			else if (!b)
				b = *buf;
			else 
				continue ;
		}
	}
	printf("asd :%c, %c\n", a, b);
	while (read(fd, buf, 1))
	{
		printf("%c", *buf);
		if (*buf == '\n')
		{
			row_i++;
			col_i = 0;
		}
		else
		{
			if (*buf == a)
				map[row_i][col_i] = 1;
			else if (*buf == b)
				map[row_i][col_i] = 0;
			col_i++;
		}
	}
	for (int o = 0; o < row; o++)
	{
		for (int t = 0; t < col; t++)
		{
			printf("%d", map[o][t]);
		}
		printf("\n");
	}
}
