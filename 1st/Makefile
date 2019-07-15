# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/07/08 17:08:23 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ARG			=	"pb pb ss ra ra pa rra rra pa"

LST			=	"44 11 33 22 55 "

DOINS		=	ft_doins

CHECK		=	ft_check

CHECKER		=	checker

PUSH_SWAP	=	push_swap

NAME		=	libft.a

CHDIR		=	checker_dir

LIBDIR		=	libft
PSDIR		=	push_swap_dir

FLAGS		=	-Wall -Werror -Wextra

CHSRC		=	$(CHDIR)/$(CHECKER).c\
				$(CHDIR)/$(DOINS).c\
				$(CHDIR)/$(CHECK).c

PSSRC		=	$(PSDIR)/$(PUSH_SWAP).c

all: $(NAME) $(CHECKER) $(PUSH_SWAP)

pref: re clean

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

bash:
	 ./push_swap $(ARG) | ./checker $(LST)
