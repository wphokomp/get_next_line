# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wphokomp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/01 15:15:18 by wphokomp          #+#    #+#              #
#    Updated: 2018/07/03 14:07:45 by wphokomp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_bzero_point.c ft_isalnum.c ft_isalpha.c\
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c\
	  ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c\
	  ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c\
	  ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c\
	  ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c\
	  ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c\
	  ft_strlcat.c ft_strlen.c ft_strlen_point.c ft_strmap.c ft_strmapi.c\
	  ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c\
	  ft_strnew_point.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c\
	  ft_strsub.c ft_strdup.c ft_strtrim.c ft_tolower.c ft_toupper.c\
	  ft_restart_file.c ft_listnew.c ft_strchr_indx.c\
	  ft_listdup.c op.c ft_chrcmp.c ft_isbrac.c ft_sortarr.c\
	  ft_putnbrendl.c

CFLAGS = -Wall\
		 -Werror\
		 -Wextra\
		 -std=c99

OBJ = *.o

INC = libft.h

all: $(NAME)

$(NAME):
	@echo "\033[32mCOMPILING...\033[00M"
	@$(CC) -c $(CFLAGS) $(INC) $(SRC)
	@echo "\033[32mCreating Objects...\033[00m"
	@ar -rc $(NAME) $(OBJ)
	@echo "\033[32mCreating Static Library libft.a\033[00m"
	@ranlib $(NAME)
	@echo "\x1b[33mCompiled...\x1b[0m"

clean:
	@rm -f *.o
	@echo "\x1b[31mObject files cleaned.\x1b[0m"

fclean: clean
	@rm -f $(NAME)
	@rm -f *.o
	@echo "\x1b[31mLibrary cleaned.\x1b[0m"

re: fclean all
