/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:00:06 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 15:09:07 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst		*ls_stack(int argc, char **argv)
{
	t_lst	*stack;
	t_lst	*tmp;
	int		num;

	stack = NULL;
	if (argc == 2)
		stack = ls_tosplit(one_c(argv));
	else
		while (--argc > 0)
		{
			num = (int)(is_int(atoi_long(argv[argc])));
			tmp = ls_lstnew(num);
			if (stack == NULL)
				stack = tmp;
			else
				ls_lstadd(&stack, &tmp);
		}
	if ((ls_isdupnum(stack)) == 0)
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
	return (stack);
}
