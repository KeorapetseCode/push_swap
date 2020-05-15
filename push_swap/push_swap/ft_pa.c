/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:11:27 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 16:11:31 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushto_a(t_stack **a, t_stack **b, t_stack *head)
{
	t_stack		*temp;

	if ((*b) == NULL)
		return ;
	while ((*b) != NULL && (*b)->next != NULL)
		(*b) = (*b)->next;
	if ((*a) == NULL && ((*b) && (*b)->next == NULL))
		return_list(a, b, &head);
	else if ((*a) != NULL && ((*b) && (*b)->next == NULL))
	{
		(*a) = head->next;
		return_list(&temp, b, &head);
		(*a)->prev = temp;
		temp->next = (*a);
		head->next = temp;
		(*a) = head->next;
		temp = NULL;
	}
}
