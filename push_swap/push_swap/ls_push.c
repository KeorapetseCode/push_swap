/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:48:33 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/10 15:03:07 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_push(t_lst **dst, t_lst **src)
{
	t_lst	*tmp;

	tmp = NULL;
	if (*src == NULL)
		return ;
	if (*dst == NULL)
	{
		*dst = *src;
		*src = (*src)->next;
		(*dst)->next = NULL;
		(*dst)->prev = NULL;
		(*src)->prev = NULL;
		return ;
	}
	tmp = *src;
	*src = (*src)->next;
	tmp->next = *dst;
	(*dst)->prev = tmp;
	tmp->prev = NULL;
	*dst = tmp;
}
