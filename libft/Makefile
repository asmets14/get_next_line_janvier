# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asmets <asmets@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/07 08:53:00 by asmets            #+#    #+#              #
#    Updated: 2015/02/04 12:59:20 by asmets           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = GCC

FLAGS = -Wall -Werror -Wextra

SRC =	ft_atoi.c\
		ft_itoa.c\
		ft_bzero.c\
		ft_isalnum.c\
		ft_isspace.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isspace.c\
		ft_isprint.c\
		ft_ismajmin.c\
		ft_memccpy.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_memalloc.c\
		ft_memchr.c\
		ft_memdel.c\
		ft_memset.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_nbrlen.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_strcpy.c\
		ft_strdup.c\
		ft_strndup.c\
		ft_strcdup.c\
		ft_strlen.c\
		ft_strdel.c\
		ft_strncat.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strstr.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strsplit.c\
		ft_strnew.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strdup.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstmap.c\
		ft_lstnew.c\
		ft_lstlast.c\
		ft_xstrjoin.c\
		ft_xstrjoin_free.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) :
	$(CC) -c $(FLAGS) $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all	
