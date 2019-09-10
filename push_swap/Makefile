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

SOURCES = ft_verify.c print_stacks.c ft_rb.c ft_rrb.c ft_pb.c ft_sa.c get_input_a.c ft_sb.c ft_pa.c make_alist.c ft_rra.c make_blist.c ft_ra.c return_list.c get_next_line/get_next_line.c

OBJECTS = ft_verify.o print_stacks.o ft_rb.o ft_rrb.o ft_pb.o ft_sa.o get_input_a.o ft_sb.o ft_pa.o make_alist.o ft_rra.o make_blist.o ft_ra.o return_list.o get_next_line.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all