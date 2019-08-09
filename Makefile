# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/08/09 15:43:42 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_1		=	checker

NAME_2		=	push_swap

LIB_PATH	=	./libft/

FLAGS		=	-Wall -Werror -Wextra

SRC_PATH	=	./src/

OBJ_PATH	=	./obj/

CHSRC		=	$(NAME_1).c\
				apply_ins_ch.c\
				apply_rr_ch.c\
				apply_rrr_ch.c\
				struct_mans.c\
				make_stacks.c

PSSRC		=	$(NAME_2).c\
				apply_ins.c\
				apply_rr.c\
				apply_rrr.c\
				find_rot.c\
				large_sort.c\
				least_moves_a_2_b.c\
				make_stacks.c\
				sort.c\
				sort_help.c\
				struct_mans.c

CHC = $(addprefix $(OBJ_PATH), $(CHSRC))

PSC = $(addprefix $(OBJ_PATH), $(PSSRC))

CHO = $(patsubst %.c, %.o, $(CHC))

PSO = $(patsubst %.c, %.o, $(PSC))

all: $(NAME_1) $(NAME_2)

libft:
	$(MAKE) -C $(LIB_PATH)/

$(NAME_1): $(CHO) libft
	gcc $(FLAGS) $(CHO) -L $(LIB_PATH) -lft -o $(NAME_1) 

$(NAME_2): $(PSO) libft
	gcc $(FLAGS) $(PSO) -L $(LIB_PATH) -lft -o $(NAME_2) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	gcc $(FLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIB_PATH)/ clean
	rm -f $(CHO)
	rm -f $(PSO)

fclean:
	rm -f $(CHO)
	rm -f $(PSO) 
	$(MAKE) -C $(LIB_PATH)/ fclean
	rm -f $(NAME_1) $(NAME_2)

re: fclean all

.PHONY: all fclean clean re libft
