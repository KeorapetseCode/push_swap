/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:27:35 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/19 16:27:57 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_stack **a, t_stack *head)
{
	t_stack		*temp;
	int			x;

	x = 0;
	temp = (*a);
	while (temp != NULL)
	{
		while ((*a) != NULL)
		{
			if (temp->num == (*a)->num)
			{
				x++;
				if (x == 2)
				{
					ft_putendl_fd("Error", 2);
					exit(0);
				}
			}
			(*a) = (*a)->next;
		}
		x = 0;
		temp = temp->next;
		(*a) = head->next;
	}
}
