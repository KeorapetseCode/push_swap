/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:38:53 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:47:34 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char		*ls_verify(t_lst *head)
{
	t_lst	*tmp1;
	t_lst	*tmp2;

	if (head == NULL)
		return (NULL);
	tmp1 = head;
	tmp2 = head->next;
	if (tmp1->content < tmp2->content)
	{
		while (tmp2 != NULL)
		{
			if (tmp1->content > tmp2->content)
				return ("KO");
			tmp1 = tmp1->next;
			tmp2 = tmp2->next;
		}
		return ("OK");
	}
	return ("KO");
}
