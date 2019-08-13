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

void	print_stacks(STACK **a, STACK **b)
{
/*	if ((*a) == NULL)
	{
		ft_putendl("Nothing in Stack A!");
		return ;
	}*/
	ft_putendl("__  __");
	while ((*a)->next != NULL)
	{
		ft_putnbr((*a)->num);
		ft_putstr("   ");
		if ((*b)->next != NULL)
		{
			ft_putnbr((*b)->num);
			(*b) = (*b)->next;
		}
		ft_putchar('\n');
		(*a) = (*a)->next;
	}
	while ((*b)->prev != NULL)
		(*b) = (*b)->prev;
	while ((*a)->prev != NULL)
		(*a) = (*a)->next;
	ft_putstr("\nA   B\n");
	ft_putendl("--  --\n");
}
