/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:29:30 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 14:38:48 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst		*ls_lstnew(int num)
{
	t_lst	*fresh;

	if (!(fresh = (t_lst *)malloc(sizeof(t_lst) * 1)))
		return (NULL);
	fresh->content = num;
	fresh->pos = 0;
	fresh->pos2 = 0;
	fresh->c = 'n';
	fresh->in_pair = 'n';
	fresh->from_pair = '0';
	fresh->next = NULL;
	fresh->prev = NULL;
	return (fresh);
}
