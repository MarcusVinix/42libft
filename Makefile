# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/14 18:25:01 by mavinici          #+#    #+#              #
#    Updated: 2021/05/14 18:25:01 by mavinici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_bzero.c \
		ft_isalpha.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c 

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = gcc
RM = rm -f 

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

comp: 
	$(CC) $(CFLAGS) $(SRCS)

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re