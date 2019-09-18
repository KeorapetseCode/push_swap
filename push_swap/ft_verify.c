/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:57:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 15:57:19 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_stack **a, t_stack *head);

void	ft_verify(t_stack **a, t_stack **b, t_stack *head)
{
	if ((*b) == NULL)
	{
		if (head->next)
			(*a) = head->next;
		while ((*a)->next)
		{
			if ((*a)->num <= (*a)->next->num)
				(*a) = (*a)->next;
			else
			{
				ft_putendl_fd("KO", 2);
				exit(0);
			}
		}
		check_dup(a, head);
		ft_putendl("OK");
		exit(0);
	}
	else
	{
		ft_putendl_fd("KO", 2);
		exit(0);
	}
}

void	check_dup(t_stack **a, t_stack *head)
{
	(*a) = head->next;
	while ((*a)->next != NULL)
	{
		if ((*a)->num == (*a)->next->num)
		{
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		(*a) = (*a)->next;
	}
}
