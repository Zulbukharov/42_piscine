/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 18:49:03 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/15 23:22:38 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ampm(int h, char *s)
{
	if (h == 11 && s[0] == 'P')
		printf("THE FOLLOWING TAKES PLACE BETWEEN
		%d.00 %s AND 12.00 A.M.\n", h, s);
	else if (h == 11 && s[0] == 'A')
		printf("THE FOLLOWING TAKES PLACE BETWEEN
				%d.00 A.M. AND 12.00 P.M.\n", h);
	else if (h == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN
				%d.00 A.M. AND 01.00 A.M.\n", h);
	else if (h == 11 && s[0] == 'P')
		printf("THE FOLLOWING TAKES PLACE BETWEEN
				%d.00 A.M. AND 01.00 A.M.\n", h);
	else
		printf("THE FOLLOWING TAKES PLACE BETWEEN
				%d.00 %s AND %d.00 %s\n", h, s, (h + 1), s);
}

void	ft_takes_place(int hour)
{
	int		am;
	char	*status;

	am = hour;
	if (hour > 12)
	{
		am = hour % 12;
		status = "P.M.";
	}
	else
		status = "A.M.";
	ampm(am, status);
}
