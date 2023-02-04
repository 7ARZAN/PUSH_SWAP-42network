# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 7arzan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/04 11:25:31 by 7arzan            #+#    #+#              #
#    Updated: 2023/02/04 11:58:31 by 7arzan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_COMMON = ./src/common/parser.c\
	     ./src/common/push_swap.c\
	     ./src/common/instructions.c\
	     ./src/common/deal_with_instructions.c\
	     ./src/common/utils/push_swap_utils.c\

SRC_SORTER = ./src/sorter/sort_to_end.c\
	     ./src/sorter/sort_two_to_five.c\
	     ./src/sorter/utils/big_sort_utils.c\

SRC_CHECKER = ./src/checker/checker.c\
	      ./src/checker/checker_actions.c\
	      ./src/checker/checker_instructions.c\
	      ./src/checker/utils/checker_utils.c\

OBJ_COMMON = $(SRC_COMMON:.c=.o)

OBJ_SORTER = $(SRC_SORTER:.c=.o)

OBJ_CHECKER = $(SRC_CHECKER:.c=.o)

INCLUDE = ./src/include

CC = gcc
CFLAGS = -Wall -Wextra -Werror -O3

NAME = push_swap
NAME_CHECKER = checker

RM = rm -f

all: $(NAME)

bonus : $(NAME_CHECKER)

.c.o:
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o ${<:.c=.o}

$(NAME): $(OBJ_COMMON) $(OBJ_SORTER)
	$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ_COMMON) $(OBJ_SORTER)

$(NAME_CHECKER): $(OBJ_COMMON) $(OBJ_CHECKER)
	$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME_CHECKER) $(OBJ_COMMON) $(OBJ_CHECKER)

clean:
	$(RM) $(OBJ_CHECKER) $(OBJ_SORTER) $(OBJ_COMMON)

fclean: clean
	$(RM) $(NAME) $(NAME_CHECKER)

re : fclean all
