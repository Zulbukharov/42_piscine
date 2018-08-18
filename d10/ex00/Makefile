# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 15:40:41 by azulbukh          #+#    #+#              #
#    Updated: 2018/03/25 18:11:55 by azulbukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEST = libft.a
SOURCE = ft_putstr.c ft_putchar.c ft_strlen.c ft_strcmp.c ft_swap.c
HEADER = includes/ft.h
WARNINGS = -Wall -Wextra -Werror

all: makelib

makelib:
	cd srcs && gcc $(WARNINGS) -c $(SOURCE) -I ../$(HEADER)
	cd srcs && ar rc ../$(DEST) *.o
	ranlib $(DEST)

clean:
	cd ./srcs && find . -name "*.o" -type f -delete

fclean: clean
	/bin/rm -f $(DEST)

re: fclean all
