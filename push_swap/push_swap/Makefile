# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/02 14:18:25 by kmpoloke          #+#    #+#              #
#    Updated: 2019/08/02 14:18:28 by kmpoloke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = print_stacks.c ft_pb.c ft_sa.c get_input.c check_num.c ft_pa.c make_alist.c make_blist.c get_next_line/get_next_line.c

OBJECTS = print_stacks.o ft_pb.o ft_sa.o get_input.o check_num.o ft_pa.o make_alist.o make_blist.o get_next_line.o

all: $(NAME)

$(NAME):
	$(CC) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all