/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 21:04:01 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:42:03 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_print(t_lst *stack)
{
	int		i;

	i = 1;
	while (stack != NULL)
	{
		ft_putnbr(i);
		ft_putstr(" | content- ");
		ft_putnbr(stack->content);
		ft_putstr(" | pos-");
		ft_putnbr(stack->pos);
		ft_putstr(" | pos2-");
		ft_putnbr(stack->pos2);
		ft_putstr(" | char-");
		ft_putchar(stack->c);
		ft_putstr(" | in pair-");
		ft_putchar(stack->in_pair);
		ft_putstr(" | from pair-");
		ft_putchar(stack->from_pair);
		ft_putendl(".");
		stack = stack->next;
		i++;
	}
	return ;
}
