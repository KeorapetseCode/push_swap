/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_blist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:26:18 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/08/28 14:34:50 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_blist(STACK **a, STACK **b, STACK **head, STACK **b_head)
{
	(*b) = (*a);
	(*a) = (*a)->next;
	if ((*a) != NULL)
		(*a)->prev = (*head);
	(*head)->next = (*a);
	(*b_head)->next = (*b);
	(*b)->prev = NULL;
	(*b)->next = NULL;
}