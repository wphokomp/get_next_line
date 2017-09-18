# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/13 10:43:03 by wphokomp          #+#    #+#              #
#    Updated: 2017/09/13 11:16:29 by wphokomp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

SRC = get_next_line.c

FLAGS = -Wall -Werror -Wextra -std=c99

OBJ = get_next_line.o

INC = get_next_line.c

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I $(INC) $(SRC) -o $(NAME)
	cd libft && $(MAKE)

clean:
	rm -fr *.o
	cd libft && $(MAKE) clean

fclean: clean
		rm -fr $(NAME)
		cd libft && $(MAKE) fclean

re: fclean all
