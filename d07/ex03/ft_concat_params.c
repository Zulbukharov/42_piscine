/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 23:29:33 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/15 23:41:35 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_of_argv(int argc, char **argv)
{
	int i;
	int len;
	int j;

	len = 0;
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		len = len + j;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	int		len;
	int		h;

	h = 0;
	i = 1;
	len = len_of_argv(argc, argv);
	str = malloc(sizeof(*str) * len);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[h] = argv[i][j];
			h++;
			j++;
		}
		str[h] = '\n';
		h++;
		i++;
	}
	str[h] = '\0';
	return (str);
}
