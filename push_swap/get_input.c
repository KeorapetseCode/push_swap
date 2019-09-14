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

void		ft_command_b(t_stack **a, t_stack **b, t_stack *head, char *input)
{
	if (ft_strnequ(input, "sb", 2))
		sort_first_two_b(b);
	else if (ft_strnequ(input, "pb", 2))
		pushto_b(a, b, head);
	else if (ft_strnequ(input, "rb", 2))
		rotate_b(b);
	else if (ft_strnequ(input, "print", 5))
	{
		ft_putendl("\n__     ____");
		print_stacks(a, b, head);
	}
	else
	{
		ft_putendl("Error!");
		exit(0);
	}
}

void		ft_command_a(t_stack **a, t_stack **b, t_stack *head, char *input)
{
	if (ft_strnequ(input, "sa", 2))
		sort_first_two(a, head);
	else if (ft_strnequ(input, "pa", 2))
		pushto_a(a, b, head);
	else if (ft_strnequ(input, "ra", 2))
		rotate_a(a, head);
	else if (ft_strnequ(input, "ss", 2))
	{
		sort_first_two(a, head);
		sort_first_two_b(b);
	}
	else
		ft_command_b(a, b, head, input);
}

int			get_input(t_stack **a, t_stack *head)
{
	char	*input;
	t_stack *b;

	b = NULL;
	while (get_next_line(0, &input))
	{
		if (ft_strnequ(input, "rra", 3))
			revrotate_a(a, head);
		else if (ft_strnequ(input, "rrb", 3))
			revrotate_b(&b);
		else if (ft_strnequ(input, "rrr", 3))
		{
			revrotate_a(a, head);
			revrotate_b(&b);
		}
		else if (ft_strnequ(input, "rr", 2))
		{
			rotate_a(a, head);
			rotate_b(&b);
		}
		else
			ft_command_a(a, &b, head, input);
	}
	ft_verify(a, &b, head);
	return (0);
}
