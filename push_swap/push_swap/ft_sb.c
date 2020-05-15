/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 09:46:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 09:46:20 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_first_two_b(t_stack **b)
{
	int		temp;

	if ((*b) == NULL && (*b)->prev == NULL && (*b)->next == NULL)
		return ;
	if ((*b) == NULL && (*b)->next)
		(*b) = (*b)->next;
	if ((*b)->next == NULL && (*b)->prev == NULL)
		return ;
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
	if ((*b) && (*b)->prev)
	{
		temp = (*b)->num;
		(*b)->num = (*b)->prev->num;
		(*b)->prev->num = temp;
	}
}
