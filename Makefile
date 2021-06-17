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

SRCS =	ft_bzero.c ft_isalpha.c \
		ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c \
		ft_strlen.c ft_strlcpy.c \
		ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c \
		ft_strncmp.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_atoi.c \
		ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew.c ft_lstadd_front.c \
		ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c

OBJS_PATH = objs

OBJS = $(patsubst %.c, $(OBJS_PATH)/%.o, $(SRCS))

WHERE = .

NAME = libft.a

CC = gcc
RM = rm -rf 

CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo Everything done.

$(OBJS_PATH)/%.o:	%.c
	@mkdir -p $(OBJS_PATH)
	@$(CC) $(CFLAGS) -I $(WHERE) -c $< -o $@

clean:
	@${RM} ${OBJS_PATH}
	@echo folder of objects was removed

fclean:	clean
	@${RM} ${NAME}
	@echo the static library was removed.

re:		fclean all

.PHONY:	all clean fclean re