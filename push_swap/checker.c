/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:52:12 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/08/13 17:53:54 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int			counta;
	char		*input;
	STACK		*a;
	STACK		*b;
	STACK		head;

	counta = 1;
	b = NULL;
	head.prev = &head;
	if (argc > 1)
	{
		while (counta < argc)
		{
			if (check_num(argv[counta]))
				a = make_alist(&a, &head, argv[counta]);
			else
				return (0);
			counta++;
		}
		if (get_input(&input, &a, &b, &head) == 0)
			return (0);
	}
	else
		ft_putendl("ERROR!\nNot enough arguments");
	return (0);
}
