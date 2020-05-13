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




CHECKER_NAME = checker
P_SWAP_NAME = push_swap
LIBFT = ./libft/libft.a
PS_LIB_NAME =./ps_lib.a
CFLAGS = -Wall -Wextra -Werror
HEADER = ./push_swap.h
CHECKER_SRC = checker_main.c
PSWAP_SRC =  push_main.c
PS_LIB_SRC = swap.c stack.c utilities.c rotate.c checker.c check_args.c \
			sort.c
PS_LIB_OBJ = $(PS_LIB_SRC:.c=.o)

all: $(LIBFT) $(PS_LIB_NAME) $(CHECKER_NAME) $(P_SWAP_NAME) 

$(LIBFT):
	@make -C ./libft/
	@echo "\033[32mMaking libft done.\033[33m"

$(PS_LIB_NAME): $(LIBFT) $(PS_LIB_SRC)  $(HEADER)
	@echo "\033[33m"
	gcc $(CFLAGS) -c $(PS_LIB_SRC) 
	@ar rc $(PS_LIB_NAME) $(PS_LIB_OBJ)
	@ranlib $(PS_LIB_NAME)
	@echo "\033[32mMaking push_swap lib done!\033[33m"

$(CHECKER_NAME): $(PS_LIB_NAME) $(CHECKER_SRC) $(HEADER)
	gcc $(CFLAGS) $(PS_LIB_NAME) $(LIBFT) $(CHECKER_SRC) -o $(CHECKER_NAME)
	@echo "\033[32mMaking checker done.\033[33m"

$(P_SWAP_NAME): $(PS_LIB_NAME) $(PSWAP_SRC) $(HEADER)
	gcc $(CFLAGS) $(PS_LIB_NAME) $(LIBFT) $(PSWAP_SRC) -o $(P_SWAP_NAME) 
	@echo "\033[32mMaking push_swap done!\033[0m"

clean:
	@make clean -C ./libft/
	@echo "\033[31m"
	rm -f $(PS_LIB_OBJ)
	@echo "\033[32mCleaning done!\033[0m"

fclean: clean
	@make fclean -C ./libft/
	@echo "\033[31m"
	rm -f $(CHECKER_NAME)
	rm -f $(P_SWAP_NAME)
	rm -f $(PS_LIB_NAME)
	@echo "\033[32mFull cleaning done!\033[0m"

re: fclean all

.PHONY: fclean clean re all
