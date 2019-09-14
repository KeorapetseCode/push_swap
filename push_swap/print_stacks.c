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

void	set_lastb(t_stack *b_head, t_stack **b)
{
	(*b) = b_head;
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
}

void	set_head(t_stack **a, t_stack *head)
{
	if (((*a) && (*a)->next == NULL) || (*a) == NULL)
		(*a) = head->next;
}

void	print_t_stacks(t_stack **a, t_stack **b, t_stack *head)
{
	t_stack	*temp;

	temp = NULL;
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
				temp = (*b);
			(*b) = (*b)->prev;
		}
		ft_putchar('\n');
	}
	if (temp != NULL)
		set_lastb(temp, b);
	(*a) = head->next;
	ft_putendl("\nA      B\n--    --");
}
