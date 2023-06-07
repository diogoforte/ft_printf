# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/07 13:38:11 by dinunes-          #+#    #+#              #
#    Updated: 2023/06/07 13:38:12 by dinunes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC =  	ft_printf.c

CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)
all:$(NAME)

$(NAME): $(OBJS)
			ar rc $(NAME) $(OBJS)
clean:
	$(RM)	$(OBJS)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)