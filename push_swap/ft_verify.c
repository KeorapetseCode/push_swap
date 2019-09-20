/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:57:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 08:56:41 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_verify(t_stack **a, t_stack **b, t_stack *head)
{
	if ((*b) == NULL)
	{
		if (head->next)
			(*a) = head->next;
		while ((*a)->next)
		{
			if ((*a)->num < (*a)->next->num)
				(*a) = (*a)->next;
			else
			{
				ft_putendl_fd("KO", 2);
				exit(0);
			}
		}
	}
	else
	{
		ft_putendl_fd("KO", 2);
		exit(0);
	}
}
