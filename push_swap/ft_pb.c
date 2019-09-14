/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 09:22:32 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 09:31:25 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		pushto_b(t_stack **a, t_stack **b, t_stack *head)
{
	t_stack *temp;

	temp = NULL;
	if ((*a) == NULL && head->next == NULL)
		return ;
	if (((*a) && (*a)->next == NULL) || ((*a) == NULL && (*a)->prev))
		(*a) = head->next;
	if ((*b) != NULL)
	{
		make_blist(a, &temp, &head);
		temp->prev = (*b);
		(*b)->next = temp;
		(*b) = temp;
		temp = NULL;
	}
	else
		make_blist(a, b, &head);
}
