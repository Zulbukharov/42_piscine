#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzavhoro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/28 17:39:38 by yzavhoro          #+#    #+#              #
#    Updated: 2018/02/28 21:17:29 by azulbukh         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = main.c validator.c map_gen.c place_square.c atoi_demo.c
FLAGS = -Wall -Wextra -Werror
HDR = prot.h
EXEC = bsq

all:
	@ gcc $(FLAGS) -o $(EXEC) $(SRCS) -I $(HDR)

clean:
	@ rm -f *.o

fclean: clean
	@ rm -f $(EXEC)

re: fclean all
