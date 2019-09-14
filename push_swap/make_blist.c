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

void	make_blist(t_stack **a, t_stack **b, t_stack **head)
{
	(*b) = (*a);
	if ((*a)->next != NULL)
		(*a) = (*a)->next;
	else
	{
		(*a) = NULL;
		(*head)->next = NULL;
	}
	if ((*a) != NULL)
	{
		(*a)->prev = NULL;
		(*head)->next = (*a);
	}
	(*b)->prev = NULL;
	(*b)->next = NULL;
}
