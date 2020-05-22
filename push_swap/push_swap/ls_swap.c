/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:47:41 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 17:21:41 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_swap(t_lst **stack){
	t_lst	*first;
	t_lst	*sec;
	t_lst	*third;

	if (*stack == NULL)
		return ;
	if ((*stack)->next == NULL)
		return ;
	first = *stack;
	sec = (*stack)->next;
	third = (*stack)->next->next;
	
	first->next = third;
	first->prev = sec;

	sec->next = first;
	sec->prev = NULL;

	if (third != NULL)
		third->prev = first;
	(*stack) = sec;
}
