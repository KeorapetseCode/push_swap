/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 09:32:11 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 09:33:48 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotate_a(t_stack **a, t_stack *head)
{
	int last_num;
	int temp;

	if ((*a) == NULL && head->next == NULL)
		return ;
	(*a) = head->next;
	while ((*a) && (*a)->next != NULL)
		(*a) = (*a)->next;
	if (((*a)->next == NULL) && ((*a)->prev == head))
		return ;
	if (((*a)->next == NULL) && (*a)->prev == NULL)
		return ;
	last_num = (*a)->num;
	while ((*a))
	{
		(*a) = (*a)->prev;
		temp = (*a)->num;
		(*a)->next->num = temp;
		if (((*a)->prev == head) || ((*a)->prev == NULL))
			break ;
	}
	(*a)->num = last_num;
}
