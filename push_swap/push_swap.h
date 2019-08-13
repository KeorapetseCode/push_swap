/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:20:07 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/08/02 11:26:05 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "get_next_line/get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>

typedef struct stack
{
	int num;
	struct stack *next;
	struct stack *prev;
}STACK;

int			check_num(char *str);
int			get_input(char *input, STACK **a, STACK **b, STACK *head);
void		print_stacks(STACK **a, STACK **b);
STACK		*sort_first_two(STACK **a);
STACK 		*make_alist(STACK **a, STACK *head, char *str);

//STACK		*sort_first_two(STACK **b);
STACK		*pushto_b(STACK **a, STACK **b);

#endif
