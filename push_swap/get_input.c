/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:55:15 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/08/13 17:55:39 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_input(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
	char	*input;

    while (get_next_line(0, &input))
	{
		if (ft_strnstr(input, "print", 5))
			print_stacks(a, b, head, b_head);

		if (ft_strnstr(input, "sa", 2))
			sort_first_two(a, head);

		if (ft_strnstr(input, "sb", 2))
			sort_first_two_b(b, b_head);

		if (ft_strnstr(input, "ss", 2))
		{
			sort_first_two(a, head);
			sort_first_two_b(b, b_head);
		}
		if (ft_strnstr(input, "ra", 2))
			rotate_a(a, head);

		if (ft_strnstr(input, "rra", 3))
			reverse_rotate_a(a, head);

		if (ft_strnstr(input, "rb", 2))
			rotate_b(b);
	
		if (ft_strnstr(input, "rrb", 3))
			reverse_rotate_b(b, b_head);

		if (ft_strnstr(input, "rrr", 3))
			{
				reverse_rotate_a(a, head);
				reverse_rotate_b(b, b_head);
			}
		if (ft_strnstr(input, "pa", 2))
			pushto_a(a, b, head, b_head);

		if (ft_strnstr(input, "pb", 2))
			pushto_b(a, b, head, b_head);
    }
    return (0);
}