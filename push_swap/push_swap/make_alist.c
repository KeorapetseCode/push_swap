/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_alist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 10:04:06 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 10:04:10 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		make_alist(t_stack **a, t_stack *head, char *str)
{
	long long	temp;

	if (!((*a) = (t_stack*)malloc(sizeof(t_stack))))
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
	temp = ft_atolong_long(str);
	if (temp > 2147483647)
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
	else
		(*a)->num = (int)temp;
	(*a)->next = NULL;
	(*a)->prev = head->prev;
	head->prev = (*a);
	(*a)->prev->next = (*a);
}
