# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/08/09 10:53:27 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_1		=	checker

NAME_2		=	push_swap

LIB			=	libft.a

LIB_PATH	=	./libft/

FLAGS		=	-Wall -Werror -Wextra

SRC_PATH	=	./src/

CHSRCC		=	$(NAME_1).c\
				apply_ins_ch.c\
				apply_rr_ch.c\
				apply_rrr_ch.c\
				struct_mans.c\
				make_stacks.c

PSSRCC		=	$(NAME_2).c\
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

CHSRC = $(addprefix $(SRC_PATH), $(CHSRCC))

PSSRC = $(addprefix $(SRC_PATH), $(PSSRCC))

CHO = $(patsubst %.c, %.o, $(CHSRC))

PSO = $(patsubst %.c, %.o, $(PSSRC))

all: $(NAME_1) $(NAME_2)

$(LIB):
	$(MAKE) -C $(LIBDIR)/

$(NAME_1): $(CHO) $(LIB)
	gcc $(FLAGS) $(CHO) -L $(LIB_PATH) -o $(NAME_1) 

$(NAME_2): $(PSO) $(LIB)
	gcc $(FLAGS) $(PSO) -L $(LIB_PATH) -o $(NAME_2) 

$(SRC_PATH)%.o: $(SRC_PATH)%.c
	gcc $(FLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBDIR)/
	rm -f $(CHO)
	rm -f $(PSO)

fclean:
	rm -f $(CHO)
	rm -f $(PSO) 
	$(MAKE) fclean -C $(LIBDIR)/
	rm -f $(NAME_1) $(NAME_2)

re: fclean all

.PHONY: all fclean clean re
