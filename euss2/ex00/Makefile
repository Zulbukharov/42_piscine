# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: opavliuk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/25 12:06:34 by opavliuk          #+#    #+#              #
#    Updated: 2018/02/25 18:15:44 by opavliuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
GFLAGS=-Wall -Wextra -Werror
FUNCS0=rush00/ft_atoi.c \
	  rush00/ft_putchar.c 
NAME0=rush-0
NAME2=rush-2
CLEAN0=rush-00 rush-01 rush-02 rush-03 rush-04
DIR0=rush00/
DIR2=rush02/

all: RUSH00

RUSH00: NAME01
	@$(CC) $(GFLAGS) $(DIR0)*00.c $(FUNCS0) -o $(NAME0)0

NAME01: NAME02
	@$(CC) $(GFLAGS) $(DIR0)*01.c $(FUNCS0) -o $(NAME0)1

NAME02: NAME03
	@$(CC) $(GFLAGS) $(DIR0)*02.c $(FUNCS0) -o $(NAME0)2

NAME03: NAME04
	@$(CC) $(GFLAGS) $(DIR0)*03.c $(FUNCS0) -o $(NAME0)3

NAME04: RUSH02
	@$(CC) $(GFLAGS) $(DIR0)*04.c $(FUNCS0) -o $(NAME0)4

RUSH02: clean 
	@$(CC) $(GFLAGS) $(DIR2)*.c -o $(NAME2)

norme:
	@norminette -R CheckForbiddenSourceHeader

clean: 
	@rm -f $(DIR)*.swp 
	@rm -f /bin/*.swp
	@rm -f $(DIR)*.swo 
	@rm -f /bin/*.swo
	@rm -f $(DIR)*.~ 
	@rm -f /bin/*.~

fclean: clean
	rm -f $(CLEAN0)
	rm -f $(NAME2)

re: fclean all
