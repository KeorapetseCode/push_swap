/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:33:59 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 10:34:04 by kmpoloke         ###   ########.fr       */
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

void		three_nodes(t_stack **a, t_stack *head)
{
	int		temp;

	while ((*a)->next != NULL)
		(*a) = (*a)->next;
	temp = (*a)->num;
	(*a) = head->next;
	if (((*a)->num > (*a)->next->num) && temp > (*a)->next->num)
	{
		ft_putendl("sa");
		sort_first_two(a, head);
	}
	else if ((temp < (*a)->next->num) && (temp < (*a)->num))
	{
		if ((*a)->num > (*a)->next->num)
		{
			ft_putendl("sa");
			sort_first_two(a, head);
		}
		ft_putendl("rra");
		revrotate_a(a, head);
	}
}

void		ft_sort_list(t_stack **a, t_stack **b, t_stack *head)
{
	int		nodes;

	nodes = num_of_nodes(a, head);
	if (nodes == 1)
		ft_putendl("OK");
	else if (nodes == 2)
	{
		if (((*a)->num) > ((*a)->next->num))
		{
			ft_putendl("sa");
			sort_first_two(a, head);
		}
		else
			ft_verify(a, b, head);
	}
	else if (nodes == 3)
	{
		(*a) = head->next;
		three_nodes(a, head);
	}
}
