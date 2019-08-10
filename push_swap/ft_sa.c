/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:01:24 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/07/30 15:01:32 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

A_STACK    *sort_first_two(A_STACK **f, A_STACK head)
{
	int			temp_1;

	(*f) = head.next;
	if ((*f) == NULL)
	{
		ft_putendl("Nothing In Stack A");
		return NULL;
	}
	else if ((*f)->next == NULL)
	{
		ft_putendl("Only one structure found");	
		return (NULL);
	}
	else
	{
		if (((*f)->num) > ((*f)->next->num))
		{
			temp_1 = (*f)->num;
			(*f)->num = (*f)->next->num;
			(*f)->next->num = temp_1;
		}
	}
	return (*f);
}