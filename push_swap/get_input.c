/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:55:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/10 14:01:33 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_command_b(STACK **a, STACK **b, STACK *head, char *input)
{
	if (ft_strnstr(input, "sb", 2))
		sort_first_two_b(&b);
	if (ft_strnstr(input, "pb", 2))
		pushto_b(a, &b, head);
	if (ft_strnstr(input, "rb", 2))
			rotate_b(&b);
	if (ft_strnstr(input, "rrb", 3))
		reverse_rotate_b(&b);
	if (ft_strnstr(input, "rr", 2))
	{
		rotate_a(a, &b, head);
		rotate_b(&b);
	}
}

void	ft_command_a(STACK **a, STACK **b, STACK *head, char *input)
{
	if (ft_strnstr(input, "sa", 2))
		sort_first_two(a, &b, head);
	if (ft_strnstr(input, "pa", 2))
		pushto_a(a, &b, head);
	if (ft_strnstr(input, "rrr", 3))
		{
			reverse_rotate_a(a, &b, head);
			reverse_rotate_b(&b);
		}
	if (ft_strnstr(input, "ra", 2))
		rotate_a(a, &b, head);
	if (ft_strnstr(input, "rra", 3))
		reverse_rotate_a(a, &b, head);
	else
		ft_command_b(a, b, head, input);
}

int     get_input(STACK **a, STACK *head)
{
	char	*input;
	STACK	*b;

	b = NULL;
	while (get_next_line(0, &input))
	{
		if (ft_strnstr(input, "ss", 2))
		{
			sort_first_two(a, &b, head);
			sort_first_two_b(&b);
		}
		if (ft_strnstr(input, "print", 5))
		{
			ft_putendl("\n__     ____");
			print_stacks(a, &b, head);
		}
		else
			ft_command_a(a, b, head, input);
	}
	ft_verify(a, &b, head);
	return (0);
}