/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 19:26:16 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 18:06:22 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	list_strcmp(t_list *begin, char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if ((!s[i] && !begin) || (!s[i] && !((char*)begin->data)[n]))
		return (0);
	if (!begin)
		return (1);
	while (s[i] == ((char*)begin->data)[n])
	{
		i++;
		n++;
		if (n == 1)
		{
			begin = begin->next;
			if (!begin && !s[i])
				return (0);
			else if (!begin)
				return (1);
			n = 0;
			continue ;
		}
	}
	return (1);
}

//void	ft_list_push_back(t_list **begin_list, void *data);

//int main()
//{
//	t_list *a = 0;
////	ft_list_push_back(&a, "1");
//	ft_list_push_back(&a, "2");
////	ft_list_push_back(&a, "3");
////	ft_list_push_back(&a, "4");
//	ft_list_push_back(&a, "5");
////	ft_list_push_back(&a, "6");
//	
//	printf("%d", list_strcmp(a, "2566"));
//}
