# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/07/07 10:23:02 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER		=	checker

PUSH_SWAP	=	push_swap

NAME		=	libft.a

CHDIR		=	checker_dir

LIBDIR		=	libft
PSDIR		=	push_swap_dir

FLAGS		=	-Wall -Werror -Wextra

CHSRC		=	$(CHDIR)/$(CHECKER).c\
				$(CHDIR)/swap.c\
				$(CHDIR)/rot.c

PSSRC		=	$(PSDIR)/$(PUSH_SWAP).c

all: $(NAME) $(CHECKER) $(PUSH_SWAP)

pref: pref$(NAME) $(CHECKER) $(PUSH_SWAP)

pref$(NAME): $(NAME) clean


$(NAME):
	$(MAKE) -C $(LIBDIR)/

$(CHECKER):
	gcc $(FLAGS) -o $(CHECKER) $(CHSRC) $(LIBDIR)/$(NAME) 

$(PUSH_SWAP):
	gcc $(FLAGS) -o $(PUSH_SWAP) $(PSSRC) $(LIBDIR)/$(NAME)

clean:
	$(MAKE) clean -C $(LIBDIR)/

fclean:
	$(MAKE) fclean -C $(LIBDIR)/
	rm -f $(CHECKER) $(PUSH_SWAP)

re: fclean all
