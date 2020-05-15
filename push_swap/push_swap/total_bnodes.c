
#include "push_swap.h"

int		total_b_nodes(t_stack **b, t_stack *b_head)
{
	int 	i;

	i = 1;
	b_head->prev = (*b);
	if ((*b) == NULL)
		return (0);
	while ((*b)->prev)
	{
		(*b) = (*b)->prev; 
		i++;
	}
	(*b) = b_head->prev;
	return (i);	
}