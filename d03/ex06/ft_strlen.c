/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/09 23:01:18 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/14 11:56:47 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;
	int c;

	n = 0;
	c = 1;
	while (str[c] != '\n')
	{
		++c;
		++n;
	}
	return (c);
}
