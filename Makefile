# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cschmied <cschmied@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/31 18:01:59 by cschmied          #+#    #+#              #
#    Updated: 2023/04/01 23:45:56 by cschmied         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := push_swap
VPATH   := sources: sources/actions

ACTIONS := r.c rr.c s.c p.c

SOURCES := main.c utils.c sort.c $(ACTIONS)

OBJS    := $(SOURCES:.c=.o)

LIBFT    := libft.a
LIBFT_DIR := libft

CC       := gcc
CFLAGS   := -Wall -Wextra -Werror -O2 -g

RED      := \033[0;31m
GREEN    := \033[0;32m
YELLOW   := \033[0;33m
BLUE     := \033[0;34m
NC       := \033[0m

$(NAME): $(OBJS) $(LIBFT)
	@echo "$(YELLOW)Compiling $(NAME)...$(NC)"
	@$(MAKE) -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) $^ $(LIBFT) -o $@
	@echo "$(GREEN)Compilation successful: $(NAME)$(NC)"

%.o: %.c
	@echo "$(BLUE)Building object file $@...$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	@echo "$(YELLOW)Building $(LIBFT)...$(NC)"
	@$(MAKE) bonus -C $(LIBFT_DIR) >/dev/null 2>&1
	@mv $(LIBFT_DIR)/$(LIBFT) .
	@echo "$(GREEN)$(LIBFT) built successfully$(NC)"

.PHONY: all clean fclean re

all: $(NAME)

clean:
	@echo "$(RED)Cleaning up object files...$(NC)"
	@rm -f $(OBJS)
	@$(MAKE) clean -C $(LIBFT_DIR) >/dev/null 2>&1
	@echo "$(RED)Clean successful$(NC)"

fclean: clean
	@echo "$(RED)Cleaning up $(NAME) and $(LIBFT_DIR)...$(NC)"
	@rm -f $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR) >/dev/null 2>&1
	@rm -f $(LIBFT)
	@echo "$(RED)Full clean successful$(NC)"

re: fclean all
