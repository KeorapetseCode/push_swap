/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:14:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/08/13 11:19:44 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(STACK **a, STACK **b, STACK *head)
{
	if ((*a)->next == NULL)
	{
		(*a) = head->next;
		if (!(*a))
			ft_putendl("Stack A Is Empty!");
	}
	ft_putendl("__  __");
	while ((*a))
	{
		ft_putnbr((*a)->num);
		ft_putstr("   ");
		if ((*b))
		{
			ft_putnbr((*b)->num);
			(*b) = (*b)->next;
		}
		ft_putchar('\n');
		(*a) = (*a)->next;
	}
	ft_putstr("\nA   B\n");
	ft_putendl("--  --\n");
}
