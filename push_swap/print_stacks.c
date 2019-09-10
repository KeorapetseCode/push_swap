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

void	set_lastb(STACK *b_head, STACK **b)
{
	(*b) = b_head;
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
}

void	set_head(STACK **a, STACK *head)
{
	if (((*a) && (*a)->next == NULL) || (*a) == NULL)
		(*a) = head->next;
}

void	print_stacks(STACK **a, STACK **b, STACK *head)
{
	STACK	*b_head;

	b_head = NULL;
	set_head(a, head);
	while ((*a) || (*b))
	{
		if ((*a) != NULL)
		{
			ft_putnbr((*a)->num);
			(*a) = (*a)->next;
		}
		ft_putstr("       ");
		if ((*b) != NULL)
		{
			ft_putnbr((*b)->num);
			if ((*b)->prev == NULL)
				b_head = (*b);
			(*b) = (*b)->prev;
		}
		ft_putchar('\n');
	}
	if (b_head != NULL)
		set_lastb(b_head, b);
	(*a) = head->next;
	ft_putendl("\nA      B\n--    --");
}