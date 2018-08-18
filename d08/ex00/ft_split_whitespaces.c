/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 15:34:14 by azulbukh          #+#    #+#             */
/*   Updated: 2018/03/25 15:04:18 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		splits(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
		else if (str[i + 1] <= 32 && str[i + 1] != '\0')
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

int		len(char *str, int j)
{
	int k;
	int i;

	i = j;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			k++;
			i++;
		}
		else
			break ;
	}
	return (k + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		w;
	int		j;
	int		i;
	char	*word;

	i = 0;
	j = 0;
	arr = (char**)malloc(sizeof(char*) * (splits(str) + 1));
	while (i < splits(str))
	{
		while (str[j] <= 32 && str[j] != '\0')
			j++;
		w = 0;
		word = malloc(sizeof(char) * (len(str, j) + 1));
		while (str[j] > 32 && str[j] != '\0')
			word[w++] = str[j++];
		word[w] = '\0';
		arr[i] = word;
		i++;
	}
	str[i] = 0;
	return (arr);
}
