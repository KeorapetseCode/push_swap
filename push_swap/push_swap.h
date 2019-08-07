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

typedef struct a_stack
{
	int num;
	struct a_stack *next;
	struct a_stack *prev;
}A_STACK;

typedef struct b_stack
{
	int num;
	struct b_stack *next;
	struct b_stack *prev;
}B_STACK;

void		print_stacks(A_STACK **a, A_STACK head, B_STACK **b);
A_STACK		*sort_first_two(A_STACK *f);

//B_STACK		*sort_first_two(B_STACK *d);
void		pushto_b(A_STACK **a, B_STACK **b);


#endif
