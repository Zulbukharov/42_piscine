/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obamzuro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 01:09:16 by obamzuro          #+#    #+#             */
/*   Updated: 2018/02/25 18:12:29 by opavliuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list			*ft_create_elem(void *data);
int				list_strcmp(t_list *begin, char *s);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
char			*rush00(int x, int y);
char			*rush01(int x, int y);
char			*rush02(int x, int y);
char			*rush03(int x, int y);
char			*rush04(int x, int y);
void			ft_list_push_back(t_list **begin_list, void *data);
void			print(t_list *begin_list);

#endif
