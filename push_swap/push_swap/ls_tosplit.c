/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_tosplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 14:18:48 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 13:40:04 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst		*ls_tosplit(char **argv)
{
	t_lst	*stack;
	t_lst	*tmp;
	char	**str;
	int		num;
	int		str_size;

	stack = NULL;
	str_size = (ft_strrows_c(argv[1], ' ') - 1);
	if (str_size == 0)
		exit(0);
	str = ft_strsplit(argv[1], ' ');
	ls_isnum1(str_size, str);
	while (str_size >= 0)
	{
		num = (int)(is_int(atoi_long(str[str_size])));
		tmp = ls_lstnew(num);
		if (stack == NULL)
			stack = tmp;
		else
			ls_lstadd(&stack, &tmp);
		free(str[str_size]);
		str_size--;
	}
	free(str);
	return (stack);
}
