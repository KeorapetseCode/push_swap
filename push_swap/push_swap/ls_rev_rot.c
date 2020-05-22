/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:57:50 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 17:24:11 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_rev_rot(t_lst **stack){
	t_lst	*head;
	t_lst	*tail;

	head = *stack;
	tail = NULL;
	if (*stack == NULL)
		return ;
	while (head->next != NULL)
		head = head->next;
	tail = head->prev;
	tail->next = NULL;
	head->prev = NULL;
	head->next = *stack;
	(*stack)->prev = head;
	*stack = head;
}
