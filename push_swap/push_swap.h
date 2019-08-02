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

#include "get_next_line/libft/libft.h"
#include "get_next_line/get_next_line.h"

typedef struct a_stack
{
	int num;
	struct a_stack *next;
	struct a_stack *prev;
}A_STACK;

A_STACK    *sort_first_two(A_STACK *f);
void    ft_print_stack(A_STACK *p);

#endif
