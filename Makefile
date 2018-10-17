# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/13 17:12:19 by sgalasso          #+#    #+#              #
#    Updated: 2018/10/17 12:28:01 by sgalasso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC =	ft_blocs_align.c \
		ft_display.c \
		ft_isfour.c \
		ft_s_blocs.c \
		ft_trimhori.c \
		ft_checks.c \
		ft_fill_dot.c \
		ft_mapsize.c \
		ft_split_file.c \
		ft_trimvert.c \
		ft_contact.c \
		ft_get_file.c \
		ft_nb_bloc.c \
		ft_sqrt.c \
		ft_valid_file.c \
		ft_create_map.c \
		ft_import.c \
		ft_resolve.c \
		ft_struct.c \
		main.c

OBJ = $(SRC:.c=.o)

INCLUDES = ./

all : lib $(NAME)

$(NAME) : $(OBJ)
	gcc -Wall -Wextra -Werror -o $(NAME) libft/libft.a $(OBJ) -I $(INCLUDES)

lib:
	make -C libft/

%.o : %.c $(INCLUDES)fillit.h Makefile
	gcc -Wall -Wextra -Werror -o $@ -c $<

clean :
	rm -f $(OBJ) && make -C libft/ clean

fclean : clean
	rm -f $(NAME) && make -C libft/ fclean

re : fclean all

.PHONY : all lib clean fclean re
