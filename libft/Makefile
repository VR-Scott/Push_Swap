# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscott <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/27 14:25:03 by vscott            #+#    #+#              #
#    Updated: 2019/08/10 09:18:24 by vscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

FLAGS		=	-Wall -Werror -Wextra

SRC_PATH	=	./src/

OBJ_PATH	=	./obj/

SRCC 		=	ft_atoi.c\
			ft_atoll.c\
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
			ft_lstmap.c\
			ft_lstnew.c\
			ft_lstpush.c\
			ft_lstrot.c\
			ft_lstrrot.c\
			ft_lstswap.c\
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
			ft_putnlst.c\
			ft_putslst.c\
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


OBJC 	=	$(addprefix $(OBJ_PATH), $(SRCC))

OBJ		=	$(patsubst %.c, %.o, $(OBJC))

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "Libft Compiled."
	ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Libft Object Files Removed."

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
