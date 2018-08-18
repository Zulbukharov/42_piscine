/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prot.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:57:10 by yzavhoro          #+#    #+#             */
/*   Updated: 2018/04/02 13:56:59 by azulbukh         ###   ########.fr       */
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
void	place_square(int **m, int *cords, int *bg, char *old);

#endif
