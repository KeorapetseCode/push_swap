/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:52:41 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 17:25:57 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_rotate(t_lst **stack)
{
	t_lst	*new_tail;
	t_lst	*tail;

	new_tail = *stack;
	tail = *stack;
	if (*stack == NULL)
		return ;
	while (tail->next != NULL)
		tail = tail->next;
	(*stack) = (*stack)->next;
	tail->next = new_tail;
	new_tail->prev = tail;
	new_tail->next = NULL;
	(*stack)->prev = NULL;
}
