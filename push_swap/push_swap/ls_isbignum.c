/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_isbignum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:07:59 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 13:57:12 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ls_isbignum(t_lst *big, t_lst *head)
{
	t_lst	*stack;

	stack = head;
	if (big == NULL || head == NULL)
		return (0);
	while (stack != NULL)
	{
		if (big->content < stack->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
