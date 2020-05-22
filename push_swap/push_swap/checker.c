/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 13:15:11 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 15:07:40 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		commands_r(const char *line, t_lst **stack_a, t_lst **stack_b)
{
	if (ft_strequ(line, "ra"))
		ls_rotate(stack_a);
	else if (ft_strequ(line, "rb"))
		ls_rotate(stack_b);
	else if (ft_strequ(line, "rr"))
	{
		ls_rotate(stack_a);
		ls_rotate(stack_b);
	}
	else if (ft_strequ(line, "rra"))
		ls_rev_rot(stack_a);
	else if (ft_strequ(line, "rrb"))
		ls_rev_rot(stack_b);
	else if (ft_strequ(line, "rrr"))
	{
		ls_rev_rot(stack_a);
		ls_rev_rot(stack_b);
	}
	else
	{
		ft_putendl_fd("Error", 2);
		exit(0);
	}
}

static void		commands(const char *line, t_lst **stack_a, t_lst **stack_b)
{
	if (ft_strequ(line, "sa"))
		ls_swap(stack_a);
	else if (ft_strequ(line, "sb"))
		ls_swap(stack_b);
	else if (ft_strequ(line, "ss"))
	{
		ls_swap(stack_b);
		ls_swap(stack_a);
	}
	else if (ft_strequ(line, "pa"))
		ls_push(stack_a, stack_b);
	else if (ft_strequ(line, "pb"))
		ls_push(stack_b, stack_a);
	else
		commands_r(line, stack_a, stack_b);
}

static void		instruction(t_lst *stack_a, t_lst *stack_b)
{
	char		*line;

	while (stack_b == NULL)
	{
		while ((get_next_line(0, &line)) == 1)
			commands(line, &stack_a, &stack_b);
		if (ft_strequ(ls_verify(stack_a), "OK") && stack_b == NULL)
		{
			ft_putendl("OK");
			exit(0);
		}
		ft_putendl("KO");
		exit(0);
	}
}

int				main(int argc, char *argv[])
{
	t_lst		*stack_b;
	t_lst		*stack_a;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	else if (argc > 2)
		ls_isnum(argc, argv);
	stack_a = ls_stack(argc, argv);
	instruction(stack_a, stack_b);
	return (0);
}
