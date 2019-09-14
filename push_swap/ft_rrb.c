/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:25:29 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 10:25:32 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		revrotate_b(t_stack **b)
{
	int		temp;
	int		start_num;

	if ((*b) == NULL)
		return ;
	while ((*b) && (*b)->prev != NULL)
		(*b) = (*b)->prev;
	if ((*b)->next == NULL && (*b)->prev == NULL)
		return ;
	start_num = (*b)->num;
	while ((*b))
	{
		(*b) = (*b)->next;
		temp = (*b)->num;
		(*b)->prev->num = temp;
		if ((*b)->next == NULL)
			break ;
	}
	(*b)->num = start_num;
}
