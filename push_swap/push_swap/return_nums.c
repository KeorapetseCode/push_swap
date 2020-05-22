#include "push_swap.h"

int		is_nextinb(t_lst **stack_b, int last){
	t_lst	*temp;
	
	temp = *stack_b;
	while (temp != NULL)
	{
		if(temp->pos == last)
			return (1);
		temp = temp->next;
	}
	return (0);
}

void		return_nums_a(t_lst **stack_a, t_lst **stack_b, int last){
	while (last != 0)
	{
		if(is_nextinb(stack_b, last))
		{
			find_last_first(stack_a, stack_b, last);
			last--;
		}
		else
		{
			rrot(stack_a);
			last--;
		}
		if (last == 1)
		{
			ls_push(stack_a, stack_b);
			ft_putendl("pa");
			last--;
		}
	}
}

void		return_nums(t_lst **stack_a, t_lst **stack_b, int last)
{
	rrot(stack_a);
	if ((*stack_a)->pos < last)
	{
		rot(stack_a);
		find_last_first(stack_a, stack_b, last);
		last--;
	}
	else
		last--;
    return_nums_a(stack_a, stack_b, last);
}
