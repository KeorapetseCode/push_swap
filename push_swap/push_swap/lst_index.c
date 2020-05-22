/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 13:18:16 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:48:01 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int			check_position(t_lst *compared, t_lst *iter){
	if (compared->pos != 0)
		return (0);
	while (iter != NULL){
		if (iter->pos == 0 && iter->content < compared->content)
			return (0);
		iter = iter->next;
	}
	return (1);
}

void		lst_index(t_lst *stack)
{
	int		i;
	int		pos;
	int 	ret;
	t_lst	*compared;
	t_lst	*iter;

	i = ls_countlist(stack);
	compared = stack;
	ret = 0;
	pos = 1;
	while (i)
	{
		iter = stack;
		ret = check_position(compared, iter);
		if (ret == 1){
			compared->pos = pos;
			i--;
			pos++;
			ret = 0;
		}
		if(compared->next == NULL && i != 0)
			compared = stack;
		else
			compared = compared->next;
	}
}
