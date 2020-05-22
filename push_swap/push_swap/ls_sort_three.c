/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:16:07 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:32:36 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	small_end(t_lst **stack)
{
	if ((*stack)->content > (*stack)->next->content){
		ls_swap(stack);
		ft_putendl("sa");
	}
	ls_rev_rot(stack);
	ft_putendl("rra");
}

static void	small_beg(t_lst **stack)
{
	ls_swap(stack);
	ft_putendl("sa");
	ls_rotate(stack);
	ft_putendl("ra");
}

static void	big_end(t_lst **stack)
{
	ls_swap(stack);
	ft_putendl("sa");
}

static void	big_beg(t_lst **stack)
{
	ls_rotate(stack);
	ft_putendl("ra");
	if (ft_strequ(ls_verify(*stack), "KO"))
	{
		ls_swap(stack);
		ft_putendl("sa");
	}
}

void		ls_sort_three(t_lst **stack)
{
	t_lst	*head;
	t_lst	*end;

	head = *stack;
	end = *stack;
	while (end->next != NULL)
		end = end->next;
	while (ft_strequ(ls_verify(*stack), "KO"))
	{
		if (ls_isbignum(head, *stack))
			big_beg(stack);
		else if (ls_isbignum(end, *stack))
			big_end(stack);
		if (ls_issmallnum(head, *stack) && ft_strequ(ls_verify(*stack), "KO"))
			small_beg(stack);
		else if (ls_issmallnum(end, *stack) && ft_strequ(ls_verify(*stack), "KO"))
			small_end(stack);
	}
}
