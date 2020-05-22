/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_short_way.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:04:13 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/09 11:30:44 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ls_short_way_b(t_lst *stack)
{
	t_lst	*tmp;
	int		end;

	end = 1;
	tmp = stack;
	while (tmp->next != NULL)
		tmp = tmp->next;
	while (tmp->prev != NULL)
	{
		if (ls_issmallnum(tmp, stack) == 1)
			break ;
		end++;
		tmp = tmp->prev;
	}
	return (end);
}

int			ls_short_way(t_lst *stack)
{
	int		begin;
	int		end;
	t_lst	*tmp;

	tmp = stack;
	begin = 1;
	while (tmp->next != NULL)
	{
		if (ls_issmallnum(tmp, stack) == 1)
			break ;
		begin++;
		tmp = tmp->next;
	}
	end = ls_short_way_b(stack);
	if (begin < end)
		return (0);
	return (1);
}
