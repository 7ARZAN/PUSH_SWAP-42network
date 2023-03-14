# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 11:25:31 by 7arzan            #+#    #+#              #
#    Updated: 2023/03/13 08:07:44 by 7arzan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_COMMON = ./src/common/parser.c\
	     ./src/common/push_swap_loading.c\
	     ./src/common/instructions.c\
	     ./src/common/utils/push_swap_utils.c\
	     ./src/common/utils/functions_needed.c\
	     ./src/common/sort_to_end.c\
	     ./src/common/sort_two_to_five.c\

SRC_CHECKER = ./src/checker/checker.c\
	      ./src/checker/checker_actions.c\
	      ./src/checker/checker_instructions.c\
	      ./src/checker/utils/checker_utils.c\
	      ./src/checker/utils/get_next_line_utils.c\
	      ./src/checker/utils/get_next_line.c\
	      ./src/checker/utils/functions_needed.c\

OBJ_COMMON = $(SRC_COMMON:.c=.o)

OBJ_CHECKER = $(SRC_CHECKER:.c=.o)

INCLUDE = ./src/include

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3

NAME = push_swap
NAME_CHECKER = checker

RM = rm -f

all: $(NAME)

bonus : $(NAME_CHECKER)

CLR_RMV:= \033[0m
RED:= \033[1;31m
GREEN:= \033[1;32m
YELLOW:= \033[1;33m
BLUE:= \033[1;34m
CYAN:= \033[1;36m

.c.o:
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o ${<:.c=.o}

$(NAME): $(OBJ_COMMON)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ_COMMON)
	@echo "$(BLUE)Compilation of ${YELLOW}$(NAME) $(RED)BY 7ARZAN ..."
	@echo "$(GREEN)HAK HAHOWA $(YELLOW)$(NAME) $(GREEN)M9AD  ✔️"

$(NAME_CHECKER): $(OBJ_CHECKER)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME_CHECKER) $(OBJ_CHECKER)
	@echo "$(BLUE)Compilation of ${YELLOW}$(NAME_CHECKER) $(RED)BY 7ARZAN ..."
	@echo "$(GREEN)HAK HAHOWA $(YELLOW)$(NAME_CHECKER) $(GREEN)M9AD  ✔️"

clean:
	@$(RM) $(OBJ_CHECKER) $(OBJ_COMMON)

fclean: clean
	@$(RM) $(NAME) $(NAME_CHECKER)
	@echo "$(RED)7ARZAN $(CYAN)GALIK MSA7 $(GREEN)L7ZA9 ✔️"

re : fclean all
