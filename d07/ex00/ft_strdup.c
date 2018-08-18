/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 16:00:03 by azulbukh          #+#    #+#             */
/*   Updated: 2018/03/19 17:09:10 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		ind;
	char	*str;

	ind = 0;
	i = ft_strlen(src);
	if (i >= 0)
	{
		str = malloc(i + 1);
		while (src[ind] != '\0')
		{
			str[ind] = src[ind];
			ind++;
		}
		str[i] = '\0';
		return (str);
	}
	else
		return (0);
}
