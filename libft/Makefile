# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 22:21:59 by cschmied          #+#    #+#              #
#    Updated: 2023/04/01 18:31:33 by cschmied         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			 ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

SRCS =  ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c 	\
    	ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c \
		ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c 	\
		ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strnstr.c 	\
		ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c	\
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c	 \
		ft_putstr_fd.c ft_putendl_fd.c ft_split.c ft_putnbr_fd.c ft_printf.c \
		print_char.c print_decimal.c print_hexpointer.c print_itohex_lower.c \
		print_itohex_upper.c print_string.c print_unsignedi.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

CC = cc

AR = ar rcs

VPATH = ft_printf

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ > /dev/null 2>&1

.PHONY: all
all:
	make $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJS) $(OBJS_BONUS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

.PHONY:	bonus
bonus:	$(NAME) $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)

