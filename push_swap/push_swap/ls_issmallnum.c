/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_issmallnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:11:46 by lshabang          #+#    #+#             */
/*   Updated: 2019/08/28 16:14:26 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ls_issmallnum(t_lst *small, t_lst *head)
{
	t_lst	*stack;

	stack = head;
	if (small == NULL || head == NULL)
		return (0);
	while (stack != NULL)
	{
		if (small->content > stack->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
