/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:03:21 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 14:14:35 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_count_if(char **tab, int (*f)(char*));

int		isup(char *str)
{
	while(*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}

int		main(void)
{
	char *words[] = {"HELL0", "EVe", 0};

	ft_count_if(words, &isup);
	return (0);
}
