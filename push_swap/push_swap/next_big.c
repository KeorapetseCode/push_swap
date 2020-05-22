#include "push_swap.h"

int			next_big(t_lst *big, t_lst *head)
{
	t_lst	*stack;

	stack = head;
	if (big == NULL || head == NULL)
		return (0);
	while (stack != NULL)
	{
		if (big->content < stack->content && stack->in_pair == 'n')
			return (0);
		stack = stack->next;
	}
	return (1);
}