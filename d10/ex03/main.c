/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:29:14 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 21:00:55 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int		main(int argc, char **argv)
{
	argc = 2;
	ft_any(argv+1, &ft_strlen);
	return (0);
}
