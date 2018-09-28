# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmashao <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 12:27:21 by kmashao           #+#    #+#              #
#    Updated: 2018/09/21 11:21:54 by kmashao          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = checker

LIBFT = libft/libft.a

COM = make -C libft/

SOURCES =	check_main.c\
			check_args.c\
			check_ops.c\
			rotate.c\
			swap_push.c\
			utilities.c\

FLAGS =		-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SOURCES)
	$(COM)
	gcc $(FLAGS) -o $(NAME) $(SOURCES) $(LIBFT)

clean:
	make clean -C libft/

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean clean re all
