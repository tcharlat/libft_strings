# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcharlat <tcharlat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/01/02 00:45:44 by tcharlat          #+#    #+#              #
#    Updated: 2014/01/02 02:46:17 by tcharlat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC =	gcc
F =		-Wall -Wextra -Werror -Weverything
I =		./includes/ft_strings.h
NAME =	libft_strings.a
S =		ft_newistr.c
S +=	ft_strtoistr.c
S +=	ft_freeistr.c
S +=	ft_putistr.c
O = $(S:.c=.o)

all: $(NAME)

$(NAME): $(O) $(I) Makefile
	@echo "Compiling lib ft_strings"
	@ar rc $@ $(O)
	@ranlib $@

%.o: ./src/%.c $(I) Makefile
	@gcc -c $(F) -I./includes/ $<

clean:
	@rm -f $(O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
