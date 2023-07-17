# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: astachni <astachni@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/17 19:07:09 by astachni          #+#    #+#              #
#    Updated: 2023/07/17 20:10:52 by astachni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:%.cpp=%.zizi)

RM = rm -rf

CFLAGS = -Wall -Werror -Wextra

CC = g++

all: $(NAME)

%.zizi: %.cpp Makefile
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf	"\033[1;33m \r\033[2KCreating -c $< -o $\n \033[0m"

$(NAME): $(OBJ) Makefile
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf	"\033[1;32m \r\033[2K Compiling $(NAME_CLIENT) : DONE \033[0m\n"

clean:
	@$(RM) $(OBJ)
	@printf	"\033[1;31m \r\033[2KDeleting objects : DONE \033[0m\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "\033[1;31m \r\033[2KDeleting executable : DONE \033[0m\n\n"

re: fclean all

.PHONY: all clean fclean re
