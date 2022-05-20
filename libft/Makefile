# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkailany <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/16 11:14:16 by lkailany          #+#    #+#              #
#    Updated: 2022/01/16 11:14:20 by lkailany         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isascii.c ft_memmove.c ft_strncmp.c ft_tolower.c ft_atoi.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strrchr.c ft_isalnum.c ft_strlcat.c ft_strlen.c ft_memchr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c 

SRCSB	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

OBJSB	= ${SRCSB:.c=.o}

NAME	= libft.a

CFLAG	= -Werror -Wall -Wextra

${NAME}:	${OBJS}
	ar r ${NAME} ${OBJS}

all:	${NAME}

clean:	
	rm -rf ${OBJS} ${OBJSB}

fclean: clean
	rm -rf ${NAME} ${OBJSB}

re:	fclean all

bonus:	all ${OBJSB}
	ar r ${NAME} ${OBJSB}

.PHONY: all bonus clean fclean re
