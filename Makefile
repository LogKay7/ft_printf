# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkailany <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 16:52:24 by lkailany          #+#    #+#              #
#    Updated: 2022/01/21 11:53:08 by lkailany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_printf.c srcs/ft_putchar_count.c srcs/ft_putconverthexa_count.c srcs/ft_putnbr_count.c srcs/ft_putstr_count.c srcs/ft_putunsnbr_count.c srcs/ft_putptr_count.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror

${NAME}:		${OBJS}
		make -C libft/ all
		cp libft/libft.a .
		mv libft.a libftprintf.a
		ar r ${NAME} ${OBJS}

all:	${NAME}

clean:
		rm -rf ${OBJS}
		rm -rf libft/*.o

fclean:	clean
		rm -rf ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
