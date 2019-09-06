/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:01:24 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/07/30 15:01:32 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_first_two(STACK **a, STACK *head)
{
	int		temp;
	
	if ((*a) == NULL || (*a)->next == NULL)
	{
		(*a) = head->next;
		if ((*a) == NULL)
		{
			ft_putendl("Nothing In Stack A");
			return ;
		}
		else if ((*a)->next == NULL)
		{
			ft_putendl("Only one structure found");	
			return ;
		}
	}
	if (((*a)->num) > ((*a)->next->num))
		{
			temp = (*a)->num;
			(*a)->num = (*a)->next->num;
			(*a)->next->num = temp;
		}
}