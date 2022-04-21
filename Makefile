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

PATH_CTYPE = ctype/
PATH_FREE = free/
PATH_LINKED_LIST = linked_list/
PATH_STDIO = stdio/
PATH_STDLIB = stdlib/
PATH_STRINGS = strings/
PATH_UTILS = utils/
PATH_INCLUDES = -I ./includes
PATH_OBJS = ./objs/

SRCS = \
	$(addprefix $(PATH_CTYPE), ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_isallspace.c) \
	$(addprefix $(PATH_FREE), ft_free_ptr.c ft_free_split.c ft_free_triple.c ft_set_free_and_null.c) \
	$(addprefix $(PATH_LINKED_LIST), ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c) \
	$(addprefix $(PATH_STDIO), ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_base_fd.c ft_putnbr_fd.c ft_putstr_fd.c) \
	$(addprefix $(PATH_STDLIB), ft_atoi.c ft_calloc.c ft_itoa_base.c ft_itoa.c) \
	$(addprefix $(PATH_STRINGS), ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ) \
	$(addprefix $(PATH_STRINGS), ft_split_rev.c ft_split.c ft_strchr.c ft_strdup.c ft_strdup2.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen_split.c ft_strlen.c) \
	$(addprefix $(PATH_STRINGS), ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_concatenate_join.c ) \
	$(addprefix $(PATH_UTILS), ft_find_index.c ft_line.c ft_strmapi.c ft_swap.c get_next_line.c)


OBJS = $(patsubst %.c, $(PATH_OBJS)%.o, $(SRCS))


NAME = libft.a

CC = gcc
RM = rm -rf 
CFLAGS = -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	begin $(OBJS)
	@echo "\e[0;32m"
	@echo /////////////////////
	@echo ////Objects Done!////
	@echo /////////////////////
	@echo "\e[0m" "\e[0;37m"
	@echo ///////////////////////////////
	@echo ////Creating Static library////
	@echo ///////////////////////////////
	@ar rcs $(NAME) $(OBJS)
	@echo "\e[0;32m"
	@echo ////////////////////////////
	@echo ////Static library Done!////
	@echo ////////////////////////////
	@echo "\e[0m"

begin:
	@echo "\e[0;37m"
	@echo /////////////////////
	@echo //Creating objects!//
	@echo /////////////////////
	@echo "\e[0m"

$(PATH_OBJS)%.o:	%.c
	@mkdir -p $(PATH_OBJS)
	@mkdir -p $(PATH_OBJS)ctype
	@mkdir -p $(PATH_OBJS)free
	@mkdir -p $(PATH_OBJS)linked_list
	@mkdir -p $(PATH_OBJS)stdio
	@mkdir -p $(PATH_OBJS)stdlib
	@mkdir -p $(PATH_OBJS)strings
	@mkdir -p $(PATH_OBJS)utils
	@$(CC) $(CFLAGS) $(PATH_INCLUDES) -c $< -o $@

clean:
	@$(RM) $(PATH_OBJS)
	@echo "\e[0;34m"
	@echo ///////////////////////////////////
	@echo ///folder of objects was removed///
	@echo ///////////////////////////////////
	@echo "\e[0m"

fclean:	clean
	@$(RM) $(NAME)
	@echo "\e[0;34m"
	@echo /////////////////////////////////////
	@echo ///the static library was removed.///
	@echo /////////////////////////////////////
	@echo "\e[0m"

re:		fclean all

.PHONY:	all clean fclean re