/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:08:10 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 23:07:01 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_validate(char *value)
{
	unsigned int len;

	len = 0;
	while (*(value + len))
		len++;
	if ((*value == '+' || *value == '-' || *value == '*'
		|| *value == '/' || *value == '%') && len == 1)
		return (1);
	else
		return (0);
}
