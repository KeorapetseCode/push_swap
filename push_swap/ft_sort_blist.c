
#include "push_swap.h"

int			num_of_nodes(t_stack **b, t_stack *b_head)
{
	int		i;

	i = 0;
	(*b) = b_head;
	while ((*b) != NULL)
	{
		i++;
		(*b) = (*b)->next;
	}
	(*b) = b_head;
	return (i);
}

void	sort_blist(t_stack **b)
{
	t_stack		*b_tail;
//	int 		temp;
	int 		nodes;

	b_tail = NULL;
	while ((*b) && (*b)->prev != NULL)
		(*b) = (*b)->prev;
	b_tail = (*b);
	nodes = num_of_nodes(b, b_tail);
	if (nodes == 2)
	{
		if (((*b)->num) < ((*b)->next->num))
			ft_putendl_fd("sb", 1);
	}
}