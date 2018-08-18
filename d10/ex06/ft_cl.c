/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 22:48:38 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 23:11:14 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	sum(char *s1, char *s2, int (*f)(char *))
{
	int	res;

	res = f(s1) + f(s2);
	ft_putnbr(res);
}

void	diff(char *s1, char *s2, int (*f)(char *))
{
	int	res;

	res = f(s1) - f(s2);
	ft_putnbr(res);
}

void	mod(char *s1, char *s2, int (*f)(char *))
{
	int res;

	res = f(s1) % f(s2);
	ft_putnbr(res);
}

void	div(char *s1, char *s2, int (*f)(char *))
{
	int res;

	res = f(s1) / f(s2);
	ft_putnbr(res);
}

void	comp(char *s1, char *s2, int (*f)(char *))
{
	int res;

	res = f(s1) * f(s2);
	ft_putnbr(res);
}
