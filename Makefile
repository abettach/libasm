# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abettach <abettach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/06 18:03:28 by abettach          #+#    #+#              #
#    Updated: 2021/04/19 13:00:02 by abettach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AR			= ar rc
CFLAGS		= -Wall -Wextra -Werror
RANLIB		= ranlib
CC			= clang

SRC =		./ft_strlen.s \
			./ft_strcpy.s \
			./ft_strcmp.s \
			./ft_write.s \
			./ft_read.s \
			./ft_strdup.s

OBJS =		$(SRC:%.s=%.o)

NAME =		libasm.a

%.o: %.s
	@nasm -f macho64 $<

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@$(RANLIB) $(NAME)
test: re
	@$(CC) $(CFLAGS) main.c $(NAME) -o start_test
	@make fclean && ./start_test && rm start_test

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

.PHONY:		all clean fclean re