# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinunes- <dinunes-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 17:59:29 by dinunes-          #+#    #+#              #
#    Updated: 2022/11/18 10:39:20 by dinunes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC =  	ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbrhex.c \
		ft_putpointerhex.c \
		ft_putstr.c \
		ft_putunsignednbr.c \

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