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
		if (ft_strnstr(input, "sa", 2))
			sort_first_two(a, head);
	
		if (ft_strnstr(input, "pb", 2))
			pushto_b(a, b, head, b_head);

		if (ft_strnstr(input, "print", 5))
			print_stacks(a, b, head, b_head);

		if ((ft_strnstr(input, "DONE", 4) || ft_strnstr(input, "done", 4)))
			return (0);
    }
    return (0);
}