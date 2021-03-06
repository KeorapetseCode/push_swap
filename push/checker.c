/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 17:52:12 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 14:50:48 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				check_num(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isdigit(str[i])))
		{
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		i++;
	}
	return (1);
}

int				search_space(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void			mult_str(char **str, int i, t_stack **a, t_stack *head)
{
	while (str[i])
	{
		if (check_num(str[i]))
			make_alist(a, head, str[i]);
		i++;
	}
}

void			init_list(t_stack **a, t_stack *head, char **str)
{
	int			i;
	char		**new_str;

	i = 1;
	new_str = NULL;
	if (search_space(str[1]))
	{
		i = 0;
		new_str = ft_strsplit(str[1], ' ');
		while (new_str[i])
		{
			if (check_num(new_str[i]))
			{
				make_alist(a, head, new_str[i]);
				ft_strdel(new_str);
			}
			i++;
		}
	}
	else
		mult_str(str, i, a, head);
}

int				main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		head;

	a = NULL;
	head.prev = &head;
	head.next = NULL;
	if (argc > 1)
	{
		init_list(&a, &head, argv);
		a = head.next;
		check_dup(&a, &head);
		if (get_input(&a, &head) == 0)
			return (0);
	}
	else
		ft_putendl_fd("ERROR", 2);
	return (0);
}
