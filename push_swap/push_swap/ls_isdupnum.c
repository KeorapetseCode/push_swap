/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_isdupnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:11:19 by lshabang          #+#    #+#             */
/*   Updated: 2019/08/28 14:18:13 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ls_isdupnum(t_lst *stack)
{
	t_lst	*tmp1;
	t_lst	*tmp2;
	int		change;

	tmp1 = stack;
	while (tmp1 != NULL)
	{
		tmp2 = stack;
		change = 0;
		while (tmp2 != NULL)
		{
			if (tmp1->content == tmp2->content)
				change++;
			if (change > 1)
				return (0);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (1);
}
