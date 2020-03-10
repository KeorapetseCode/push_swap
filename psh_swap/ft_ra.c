/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:20:17 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 10:20:24 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		rotate_a(t_stack **a, t_stack *head)
{
	int		temp;
	int		start_num;

	if ((*a) != NULL && (*a)->next == NULL)
		(*a) = head->next;
	if ((*a)->next == NULL && (*a)->prev == head)
		return ;
	else if ((*a)->next == NULL && (*a)->prev == NULL)
		return ;
	(*a) = head->next;
	start_num = (*a)->num;
	while ((*a)->next != NULL)
	{
		(*a) = (*a)->next;
		temp = (*a)->num;
		(*a)->prev->num = temp;
	//	if ((*a)->next == NULL)
	//		break ;
	}
	(*a)->num = start_num;
	(*a) = head->next;
}
