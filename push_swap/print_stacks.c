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

void	print_stacks(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
	if (!(*a) || (*a)->next == NULL)
		(*a) = head->next;
	ft_putendl("\n__  __");
	while ((*a))
	{
		if ((*a) != NULL)
		{
			ft_putnbr((*a)->num);
			(*a) = (*a)->next;
		}
		ft_putstr("   ");
		if ((*b) != NULL)
		{
			ft_putnbr((*b)->num);
				(*b) = (*b)->next;
		}
		ft_putchar('\n');
	}
	(*a) = head->next;
	(*b) = b_head->next;
	ft_putstr("\nA   B\n");
	ft_putendl("--  --\n");
}
