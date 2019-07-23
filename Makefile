# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/07/23 16:58:34 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARG			=	"pb pb ss ra ra pa rra rra pa"

LST			=	"44 11 33 22 55 "

NAME_1		=	checker

NAME_2		=	push_swap

LIB			=	libft.a

LIBDIR		=	libft

FLAGS		=	-Wall -Werror -Wextra

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


all: $(NAME_1) $(NAME_2)

pref: re clean

$(LIB)pref: $(LIB)re clean

$(LIB)re: $(LIB)fclean $(LIB)

$(LIB)fclean:
	$(MAKE) fclean -C $(LIBDIR)/

$(LIB):
	$(MAKE) -C $(LIBDIR)/

$(NAME_1): $(LIB)
	gcc $(FLAGS) -o $(NAME_1) $(CHSRC) $(LIBDIR)/$(LIB)

$(NAME_2): $(LIB)
	gcc $(FLAGS) -o $(NAME_2) $(PSSRC) $(LIBDIR)/$(LIB)

clean:
	$(MAKE) clean -C $(LIBDIR)/

fclean:
	$(MAKE) fclean -C $(LIBDIR)/
	rm -f $(NAME_1) $(NAME_2)

re: fclean all

bash:
	 ./$(NAME_2) $(ARG) | ./$(NAME_1) $(LST)
