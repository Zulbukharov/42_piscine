/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prot.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:57:10 by yzavhoro          #+#    #+#             */
/*   Updated: 2018/02/28 18:30:21 by yzavhoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROT_H

# define PROT_H
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		atoi_demo(char *str);
void	map_gen(int row, int col, char *fn);
int		*if_valid(char *argv, int i, int fd, int *a);
int		min_plus_one(int a, int b, int c);
int		**max_squad(int **m, int *cords, char *a);
int		**fill_map(int **map, int fd, char *a);
char	*make_a(int fd, char *a);
void	place_square(int **m, int *cords, int *bg, char *old);

#endif
