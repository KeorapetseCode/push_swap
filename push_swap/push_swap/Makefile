# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lshabang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/28 17:24:43 by lshabang          #+#    #+#              #
#    Updated: 2019/09/22 14:49:40 by lshabang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

C = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = one_c.c lst_index.c ls_countlist.c ls_isbignum.c ls_isdupnum.c ls_isnum.c ls_isnum1.c ls_issmallnum.c ls_lstadd.c ls_lstnew.c ls_push.c ls_swap.c ls_rotate.c ls_rev_rot.c ls_short_way.c ls_sort_three.c ls_stack.c ls_tosplit.c ls_verify.c ls_print.c sort_top.c atoi_long.c is_int.c taketotop.c swap.c return_nums.c next_big.c lst_index2.c ls_rrot.c ls_rot.c ls_command.c find_next.c find_last_first.c

OBJECTS = one_c.o lst_index.o ls_countlist.o ls_isbignum.o ls_isdupnum.o ls_isnum.o ls_isnum1.o ls_issmallnum.o ls_lstadd.o ls_lstnew.o ls_push.o ls_swap.o ls_rotate.o ls_rev_rot.o ls_short_way.o ls_sort_three.o ls_stack.o ls_tosplit.o ls_verify.o ls_print.o sort_top.o atoi_long.o is_int.o taketotop.o swap.o return_nums.o next_big.o lst_index2.o ls_rrot.o ls_rot.o ls_command.o find_next.o find_last_first.o

all: $(NAME)

$(NAME):
	make re -C libft
	$(C) $(CFLAGS) $(SOURCES) -c
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	$(C) $(CFLAGS) push_swap.c $(NAME) libft/libft.a -o push_swap
	$(C) $(CFLAGS) checker.c $(NAME) libft/libft.a -o checker

clean:
	make fclean -C libft
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
