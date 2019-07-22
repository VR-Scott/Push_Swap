# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/07/20 17:00:14 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARG			=	"pb pb ss ra ra pa rra rra pa"

LST			=	"44 11 33 22 55 "

CHECKER		=	checker

CHECKERX		=	checkerx

NAME		=	push_swap

NAMEX		=	push_swapx

LIB			=	libft.a

LIBDIR		=	libft

FLAGS		=	-Wall -Werror -Wextra

CHSRC		=	$(CHECKER).c\
				apply_ins.c\
				apply_rr.c\
				apply_rrr.c\
				struct_mans.c\
				make_stacks.c

PSSRC		=	$(NAME).c\
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


all: $(LIB) $(CHECKERX) $(NAMEX)

$(NAME): $(LIB) $(NAMEX)

pref: re clean

$(LIB)pref: $(LIB)re clean

$(LIB)re: $(LIB)fclean $(LIB)

$(LIB)fclean:
	$(MAKE) fclean -C $(LIBDIR)/

$(LIB):
	$(MAKE) -C $(LIBDIR)/

$(CHECKERX):
	gcc $(FLAGS) -o $(CHECKER) $(CHSRC) $(LIBDIR)/$(LIB)

$(NAMEX):
	gcc $(FLAGS) -o $(NAME) $(PSSRC) $(LIBDIR)/$(LIB)

clean:
	$(MAKE) clean -C $(LIBDIR)/

fclean:
	$(MAKE) fclean -C $(LIBDIR)/
	rm -f $(CHECKER) $(NAME)

re: fclean all

bash:
	 ./$(NAME) $(ARG) | ./$(NAME) $(LST)
