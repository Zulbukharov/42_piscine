# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/20 14:19:42 by azulbukh          #+#    #+#              #
#    Updated: 2018/02/20 15:28:20 by azulbukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

init:
	cp ../ex01/ft.h ./
	cp ../ex01/libft.a ../
	touch main.c
	touch $(1)

build:
	gcc -Wall -Wextra -Werror main.c $(1) ../libft.a
	./a.out

clean:
	rm ../libft.a

rm:
	rm ft.h && rm main.c
