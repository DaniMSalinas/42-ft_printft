# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmaldona <dmaldona@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/05 19:26:50 by dmaldona          #+#    #+#              #
#    Updated: 2022/11/08 12:04:39 by dmaldona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -I.
SRCS	= main.c\
			ft_printf.c\
			src/libft/ft_strlen.c\
			src/libft/ft_putstr_fd.c\
			src/libft/ft_putnbr_fd.c\
			src/libft/ft_putchar_fd.c\
			src/char_handler.c\
			src/dec_handler.c\
			src/hex_handler.c\
			src/str_handler.c

OBJS	= $(SRCS:%.c=%.o)
NAME	= libftprintf.a


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