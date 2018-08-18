/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 18:23:53 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/11 21:15:59 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		print_second(int x, int y, int lines)
{
	int l;

	l = 1;
	while (l <= x && y < (lines - 1))
	{
		if (l == x)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else if (l == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		l++;
	}
	y++;
	return (y);
}

int		last_line(int x, int chars)
{
	if (x == 1)
	{
		ft_putchar('C');
		ft_p
	}
	else if (x == chars)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
		ft_putchar('B');
	x++;
	return (x);
}

void	liner(int x, int y, int chars, int lines)
{
	while ((y == 1 || y == lines) && x <= chars)
	{
		if (x == chars)
		{
			if (chars > 1)
				ft_putchar('C');
			else
				ft_putchar('A');
			ft_putchar('\n');
			while (y < lines)
			{
				x = 1;
				y = print_second(chars, y, lines);
				while (y == lines && x <= chars)
				{
					x = last_line(x, chars);
				}
			}
		}
		else if (x == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		x++;
	}
}

void	rush(int x, int y)
{
	int l;
	int g;

	l = 1;
	g = 1;
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		liner(l, g, x, y);
		return ;
	}
}
