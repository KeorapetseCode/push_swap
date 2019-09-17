/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:01:56 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/17 17:01:58 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_small_num(t_stack **a, t_stack *head)
{
	int i;

	(*a) = head->next;
	i = (*a)->num;
	while ((*a) != NULL)
	{
		if((*a)->num < i)
			i = (*a)->num;
		(*a) = (*a)->next;
	}
	(*a) = head->next;
	return (i);
}

void    push_to_brra(t_stack **a, t_stack **b, t_stack *head, int minim)
{
	while ((*a)->num != minim)
	{
		revrotate_a(a, head);
		ft_putendl_fd("rra", 1);
	}
    pushto_b(a, b, head);
	ft_putendl_fd("pb", 1);
	four_nodes(a, head);
	pushto_a(a, b, head);
	ft_putendl_fd("pa", 1);
}

void	push_to_bra(t_stack **a, t_stack **b, t_stack *head, int minim)
{
	if ((*a)->num != minim)
	{
        rotate_a(a, head);
        ft_putendl_fd("ra", 1);
	}
    pushto_b(a, b, head);
    ft_putendl_fd("pb", 1);
    four_nodes(a, b, head);
}

void    five_nodes(t_stack **a, t_stack **b, t_stack *head)
{
    int		pos;
	int		small_num;

	pos = 1;
	small_num = find_small_num(a, head);
	while ((*a))
	{
		if ((*a)->num == small_num)
			break ;
		(*a) = (*a)->next;
		pos++;
	}
	(*a) = head->next;
	if (pos == 1 || pos == 2)
		push_to_bra(a, b, head, small_num);
	else if (pos > 2)
		push_to_brra(a, b, head, small_num);
}
