# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/02 14:18:25 by kmpoloke          #+#    #+#              #
#    Updated: 2019/09/20 09:17:29 by kmpoloke         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCES = check_dup.c five_nodes.c four_nodes.c three_nodes.c ft_atolong_long.c ft_sort.c ft_rrb.c ft_rra.c ft_verify.c print_stacks.c ft_rb.c ft_pb.c ft_sa.c get_input.c ft_sb.c ft_pa.c make_alist.c make_blist.c ft_ra.c return_list.c get_next_line/get_next_line.c

OBJECTS = check_dup.o five_nodes.o four_nodes.o three_nodes.o ft_atolong_long.o ft_sort.o ft_rrb.o ft_rra.o ft_verify.o ft_rb.o ft_pb.o ft_sa.o get_input.o print_stacks.o ft_sb.o ft_pa.o make_alist.o make_blist.o ft_ra.o return_list.o get_next_line.o

all: $(NAME)

$(NAME):
	make -C libft
	$(CC) $(CFLAGS) $(SOURCES) -c -I push_swap.h
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	$(CC) $(CFLAGS) checker.c $(NAME) libft/libft.a -o checker 
	$(CC) $(CFLAGS) push_swap.c $(NAME) libft/libft.a -o push_swap

clean:
	make clean -C libft
	/bin/rm -f $(OBJECTS)

fclean: clean
	make fclean -C libft
	/bin/rm -f $(NAME)

re: fclean all
