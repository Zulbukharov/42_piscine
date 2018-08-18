/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:08:50 by azulbukh          #+#    #+#             */
/*   Updated: 2018/02/20 22:53:48 by azulbukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

void	ft_putchar(char c);
int		ft_atoi(char *c);
void	ft_putnbr(int nb);
int		ft_validate(char *c);
void	ft_putstr(char *str);
void	sum(char *s1, char *s2, int (*f)(char *));
void	diff(char *s1, char *s2, int (*f)(char *));
void	mod(char *s1, char *s2, int (*f)(char *));
void	comp(char *s1, char *s2, int (*f)(char *));
void	div(char *s1, char *s2, int (*f)(char *));

#endif
