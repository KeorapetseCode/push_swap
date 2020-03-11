/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:33:59 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 15:12:28 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void		ft_sort_list(t_stack **a, t_stack **b, t_stack *head)
{
	int		nodes;

	nodes = total_nodes(a, head);
	if (nodes == 2)
		two_nodes(a, head);
	else if (nodes == 3)
		three_nodes(a, head);
	else if (nodes == 4)
		four_nodes(a, b, head);
	else if (nodes == 5)
		five_nodes(a, b, head);
	else if (nodes >= 6)
		mult_nodes(a, b, head);
}
