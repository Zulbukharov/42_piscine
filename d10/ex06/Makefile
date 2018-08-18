# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 14:19:42 by azulbukh          #+#    #+#              #
#    Updated: 2018/02/22 19:44:47 by azulbukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

WARNING = -Wall -Wextra -Werror
DEST = libft.a
EXE = do-op
SOURCE = ft_validate.c ft_putnbr.c ft_putchar.c ft_atoi.c ft_putstr.c ft_cl.c main.c
HEADER = head.h
MAIN = main.o

all:
	gcc $(WARNING) -c $(SOURCE) -I $(HEADER)
	ar rc $(DEST) *.o
	ranlib $(DEST)
	gcc -o $(EXE) $(DEST)

clean:
	find . -name "*.o" -type f -delete
	rm $(DEST)
	rm do-op

test:
	./do-op
	./do-op 1 + 1
	./do-op 42amis - -20toto12
	./do-op 1 p 1
	./do-op 1 + toto3
	./do-op toto3 + 4
	./do-op foo plus bar
	./do-op 25 / 0
	./do-op 25 % 0
