/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 09:00:31 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 09:06:39 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			value_of_third_node(t_stack **a, t_stack *head)
{
	int		i;

	while ((*a)->next != NULL)
		(*a) = (*a)->next;
	i = (*a)->num;
	(*a) = head->next;
	return (i);
}

void		first_node_small(t_stack **a, t_stack *head, int temp)
{
	if (((*a)->num < (*a)->next->num))
	{
		if ((temp < (*a)->num) && (temp < (*a)->next->num))
		{
			revrotate_a(a, head);
			ft_putendl_fd("rra", 1);
		}
		else if ((temp > (*a)->num) && (temp < (*a)->next->num))
		{
			revrotate_a(a, head);
			ft_putendl_fd("rra", 1);
			sort_first_two(a, head);
			ft_putendl_fd("sa", 1);
		}
	}
}

void		three_nodes(t_stack **a, t_stack *head)
{
	int		temp;

	temp = value_of_third_node(a, head);
	if (((*a)->num > (*a)->next->num))
	{
		if ((temp > (*a)->num) && (temp > (*a)->next->num))
		{
			sort_first_two(a, head);
			ft_putendl_fd("sa", 1);
		}
		else if ((temp < (*a)->num) && (temp < (*a)->next->num))
		{
			sort_first_two(a, head);
			ft_putendl_fd("sa", 1);
			revrotate_a(a, head);
			ft_putendl_fd("rra", 1);
		}
		else if ((temp < (*a)->num) && temp > ((*a)->next->num))
		{
			rotate_a(a, head);
			ft_putendl_fd("ra", 1);
		}
	}
	else
		first_node_small(a, head, temp);
}
