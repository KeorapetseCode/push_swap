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

int     check_num(char *str)
{
	int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(ft_isdigit(str[i])))
        {
            ft_putendl("Error!\nInput Not A Number");
            exit(0);
        }
        i++;
    }
    return (1);
}

int		search_space(char *str)
{
	int 	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

void	init_list(STACK **a, STACK *head, char **str)
{
	int 	i;
	char 	**new_str;

	i = 1;
	new_str = NULL;
	if (search_space(str[1]))
	{
		i = 0;
		new_str = ft_strsplit(str[1], ' ');
		while (new_str[i])
		{
			if (check_num(new_str[i]))
				make_alist(a, head, new_str[i]);
			i++;
		}
	}
	else
		while (str[i])
		{
			if (check_num(str[i]))
				make_alist(a, head, str[i]);
			i++;
		}
}

int		main(int argc, char **argv)
{
	STACK		*a;
	STACK		head;

	a = NULL;
	head.prev = &head;
	head.next = NULL;
	if (argc > 1)
	{
		init_list(&a, &head, argv);
		if (get_input(&a, &head) == 0)
			return (0);
	}
	else
		ft_putendl_fd("ERROR!\nNot enough arguments", 2);
	return (0);
}