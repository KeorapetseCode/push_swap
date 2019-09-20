/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:33:59 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 08:52:57 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			num_of_nodes(t_stack **a, t_stack *head)
{
	int		i;

	i = 0;
	(*a) = head->next;
	while ((*a) != NULL)
	{
		i++;
		(*a) = (*a)->next;
	}
	(*a) = head->next;
	return (i);
}

void		ft_sort_list(t_stack **a, t_stack **b, t_stack *head)
{
	int		nodes;

	nodes = num_of_nodes(a, head);
	if (nodes == 2)
	{
		if (((*a)->num) > ((*a)->next->num))
		{
			ft_putendl("sa");
			sort_first_two(a, head);
		}
	}
	else if (nodes == 3)
	{
		(*a) = head->next;
		three_nodes(a, head);
	}
	else if (nodes == 4)
	{
		(*a) = head->next;
		four_nodes(a, b, head);
	}
	else if (nodes == 5)
	{
		(*a) = head->next;
		five_nodes(a, b, head);
	}
}
