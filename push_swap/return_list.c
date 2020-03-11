/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:51:33 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 15:51:37 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	return_list(t_stack **a, t_stack **b, t_stack **head)
{
	(*a) = (*b);
	if ((*b)->prev != NULL)
	{
		(*b) = (*b)->prev;
		(*b)->next = NULL;
	}
	else
		(*b) = NULL;

	(*head)->next = (*a);
	(*a)->next = NULL;
	(*a)->prev = NULL;
}
