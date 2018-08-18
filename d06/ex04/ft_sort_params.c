/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 20:17:45 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/14 21:45:08 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcomp(char *a, char *b)
{
	unsigned int s;

	s = 0;
	while (a[s] != '\0' && b[s] != '\0' && a[s] == b[s])
		s++;
	return (a[s] - b[s]);
}

void	ft_putst(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		n;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		n = 1;
		while (n < argc)
		{
			if (ft_strcomp(argv[i], argv[n]) < 0)
			{
				temp = argv[n];
				argv[n] = argv[i];
				argv[i] = temp;
			}
			n++;
		}
		i++;
	}
	ft_putst(argc, argv);
}
