
#include "push_swap.h"

int			total_nodes(t_stack **a, t_stack *head)
{
	int		i;

	i = 0;
	(*a) = head->next;
	while ((*a) != NULL)
	{
		i++;
		(*a) = (*a)->next;
	}
	(*a) = head->next;
	return (i);
}