/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:57:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 14:51:48 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	before_sort(t_stack **a, t_stack **b, t_stack *head)
{
	if ((*b) == NULL)
	{
		if (head->next)
			(*a) = head->next;
		while ((*a)->next)
		{
			if ((*a)->num < (*a)->next->num)
				(*a) = (*a)->next;
			else
			{
				(*a) = head->next;
				return ;
			}
		}
		if ((*a)->next == NULL)
		{
			free((*a));
			free((*b));
			(*a) = NULL;
			(*b) =NULL;
			exit(0);
		}
	}
	else
		return ;
}

void	ft_verify(t_stack **a, t_stack **b, t_stack *head)
{
	if ((*b) == NULL)
	{
		if (head->next)
			(*a) = head->next;
		while ((*a)->next)
		{
			if ((*a)->num < (*a)->next->num)
				(*a) = (*a)->next;
			else
			{
				ft_putendl("KO");
				exit(0);
			}
		}
		if ((*a)->next == NULL)
			ft_putendl("OK");
	}
	else
	{
		ft_putendl("KO");
		exit(0);
	}
}
