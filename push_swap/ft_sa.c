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

A_STACK    *sort_first_two(A_STACK *f)
{
	int			temp_1;
	A_STACK		*struct_ptr;

	temp_1 = 0;
		if (f->next == NULL)
		ft_putendl("Only one structure found");
	else
	{
		if ((f->num) > (f->prev->num))
			{
				temp_1 = f->num;
				f->num = f->prev->num;
				f->prev->num = temp_1;
			}
	}
	return f;
}