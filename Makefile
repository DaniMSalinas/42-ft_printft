# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:26:50 by dmaldona          #+#    #+#              #
#    Updated: 2022/11/05 20:05:42 by dmaldona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -I.

OBJS	= $(SRCS:%.c=%.o)
NAME	= libftprintf.a
SRCS	= ft_printf.c

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

all:		$(NAME) 
clean:		
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean

.PHONY:		all clean fclean re