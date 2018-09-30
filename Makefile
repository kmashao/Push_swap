# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmashao <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/28 08:12:04 by kmashao           #+#    #+#              #
#    Updated: 2018/09/28 08:12:21 by kmashao          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
NAMES = push_swap

LIBFT = libft/libft.a

COM = make -C libft/

SOURCES =	check_main.c\
			check_args.c\
			check_ops.c\
			rotate.c\
			swap_push.c\
			utilities.c

SOURCESS =	push_main.c\
			check_args.c\
			check_ops.c\
			rotate.c\
			swap_push.c\
			utilities.c\
			sort.c


FLAGS =		-Wall -Wextra -Werror

all: $(NAME) $(NAMES)

$(NAME): $(SOURCES)
	$(COM)
	gcc $(FLAGS) -o $(NAME) $(SOURCES) $(LIBFT)

$(NAMES) : $(SOURCESS)
	$(COM) 
	gcc	$(FLAGS) -o $(NAMES) $(SOURCESS) $(LIBFT)
clean:
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	rm -f $(NAMES)

re: fclean all

.PHONY: fclean clean re all
