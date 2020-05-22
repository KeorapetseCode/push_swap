#include "push_swap.h"

void		push_back(t_lst **stack_a, t_lst **stack_b)
{
	while (*stack_b != NULL)
	{
		ls_push(stack_a, stack_b);
		ft_putendl("pa");
	}
}

void	command_s(t_lst **stack_a)
{
	if ((ls_short_way(*stack_a)))
		rrot(stack_a);
	else if ((ls_short_way(*stack_a)) == 0)
		rot(stack_a);
}

void	command(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*tmp;

	while (ls_countlist(*stack_a) > 3)
	{
		tmp = *stack_a;
		if ((ft_strequ(ls_verify(*stack_a), "OK")))
			break ;
		if ((ls_issmallnum(tmp, *stack_a)))
		{
			ls_push(stack_b, stack_a);
			ft_putendl("pb");
		}
		else
			command_s(stack_a);
	}
	if (ls_countlist(*stack_a) <= 3 && (ft_strequ(ls_verify(*stack_a), "KO")))
		ls_sort_three(stack_a);
	if (stack_b != NULL)
		push_back(stack_a, stack_b);
}