/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:17:21 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 16:17:23 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rotate_b(t_stack **b)
{
	int		temp;
	int		last_num;

	if ((*b) == NULL)
		return ;
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
	if ((*b)->next == NULL && (*b)->prev == NULL)
		return ;
	last_num = (*b)->num;
	while ((*b))
	{
		(*b) = (*b)->prev;
		temp = (*b)->num;
		(*b)->next->num = temp;
		if ((*b)->prev == NULL)
			break ;
	}
	(*b)->num = last_num;
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
}
