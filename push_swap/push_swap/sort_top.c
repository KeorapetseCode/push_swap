/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_top.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:01:03 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 11:49:00 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// this had to be changed

void		swap_a(t_lst *stack)
{
	ls_swap(&stack);
	ft_putendl("sa");
}

void		swap_b(t_lst *stack)
{
	ls_swap(&stack);
	ft_putendl("sb");
}

void		sort_top(t_lst *stack_a, t_lst *stack_b)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	if (stack_a != NULL && stack_a->next != NULL)
		a = 1;
	if (stack_b != NULL && stack_b->next != NULL)
		b = 1;
	if (a == 1 && ((stack_a->content) - 1) == stack_a->next->content)
		a = 2;
	if (b == 1 && ((stack_b->content) - 1) == stack_b->next->content)
		b = 2;
	if (a == 2 && b == 2)
	{
		ls_swap(&stack_a);
		ls_swap(&stack_b);
		ft_putendl("ss");
	}
	else if (a == 2 && b != 2)
		swap_a(stack_a);
	else if (b == 2 && a != 2)
		swap_b(stack_b);
}
