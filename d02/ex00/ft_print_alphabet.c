/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 15:34:26 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/08 22:29:45 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int ch;

	ch = 97;
	while (ch <= 122)
	{
		ft_putchar(ch);
		ch++;
	}
	ft_putchar('\n');
}
