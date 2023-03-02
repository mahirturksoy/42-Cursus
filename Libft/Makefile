# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mturksoy <mturksoy@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/07 05:13:00 by mturksoy          #+#    #+#              #
#    Updated: 2023/01/07 05:13:02 by mturksoy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a

CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror -I. -c

FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
