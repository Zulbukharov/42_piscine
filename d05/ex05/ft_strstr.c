/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 16:35:52 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/13 21:15:25 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_lines(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count - 1);
}

char	*cut_str(char *str, int nb)
{
	char *a;

	a = str + nb;
	return (a);
}

char	*ft_strstr(char *str, char *to_find)
{
	int in;
	int inf;
	int find_count;

	in = 0;
	inf = 0;
	find_count = count_lines(to_find);
	while (str[in] != '\0')
	{
		if (str[in] == to_find[inf])
		{
			if (find_count == inf)
				return (cut_str(str, in - 1));
			else
				inf++;
		}
		in++;
	}
	return (0);
}
