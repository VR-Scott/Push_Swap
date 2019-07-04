# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 16:26:49 by vscott            #+#    #+#              #
#    Updated: 2019/07/04 17:16:58 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER		=	checker

PUSH_SWAP	=	push_swap

NAME		=	libft.a

FLAGS		=	-Wall -Werror -Wextra

SRC 		=	ft_atoi.c\
				ft_bzero.c\
				ft_freejoin.c\
				get_next_line.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_itoa.c\
				ft_lstadd.c\
				ft_lstdel.c\
				ft_lstdelone.c\
				ft_lstiter.c\
				ft_lstnew.c\
				ft_lstmap.c\
				ft_memalloc.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memdel.c\
				ft_memmove.c\
				ft_memset.c\
				ft_putchar.c\
				ft_putchar_fd.c\
				ft_putendl.c\
				ft_putendl_2d.c\
				ft_putendl_fd.c\
				ft_putnbr.c\
				ft_putnbr_fd.c\
				ft_putstr.c\
				ft_putstr_fd.c\
				ft_strcat.c\
				ft_strchr.c\
				ft_strclr.c\
				ft_strcmp.c\
				ft_strcpy.c\
				ft_strdel.c\
				ft_strdup.c\
				ft_strequ.c\
				ft_striter.c\
				ft_striteri.c\
				ft_strjoin.c\
				ft_strlcat.c\
				ft_strlen.c\
				ft_strmap.c\
				ft_strmapi.c\
				ft_strncat.c\
				ft_strncmp.c\
				ft_strncpy.c\
				ft_strnequ.c\
				ft_strnew.c\
				ft_strnstr.c\
				ft_strrchr.c\
				ft_strsplit.c\
				ft_strstr.c\
				ft_strsub.c\
				ft_strtrim.c\
				ft_tolower.c\
				ft_toupper.c

CHSRC		=	checker/checker.c

PSSRC		=	push_swap/push_swap.c

OBJ			=	$(SRC:%.c=%.o)

CHOBJ		=	$(CHSRC:%.c=%.o)

PSOBJ		=	$(PSSRC:%.c=%.o)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

$(CHECKER):
	gcc $(FLAGS) -o $(CHECKER) $(CHSRC) 

$(PUSH_SWAP):
	gcc $(FLAGS) -o $(PUSH_SWAP) $(PSSRC)

clean: rm irf
