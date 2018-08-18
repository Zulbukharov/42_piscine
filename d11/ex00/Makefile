# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azulbukh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/21 12:46:06 by azulbukh          #+#    #+#              #
#    Updated: 2018/02/21 15:22:01 by azulbukh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	touch main.c
	echo '#include "ft_list.h"' >> main.c
	echo '#include <stdio.h>' >> main.c
	echo "t_list *ft_create_elem(void *data);" >> main.c
	echo "int	main(int argc, char **argv)" >> main.c
	echo "{" >> main.c
	echo "	argc = 1;" >> main.c
	echo "	t_list *p;" >> main.c
	echo "  p = ft_create_elem(argv[0]);" >> main.c
	echo '	printf("%s", p->data);' >> main.c 
	echo "	return (0);" >> main.c
	echo "}" >> main.c
	gcc -Wall -Wextra -Werror $(1) ft_list.h main.c
	./a.out

clean:
	rm main.c
	rm a.out
