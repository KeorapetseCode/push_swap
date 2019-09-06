
#include "push_swap.h"

void	return_list(STACK **a, STACK **b, STACK **head, STACK **b_head)
{
	(*a) = (*b);
	if ((*b)->prev != NULL)
	{
		(*b) = (*b)->prev;
		(*b)->next = NULL;
	}
	else
	{
		(*b) = NULL;
		(*b_head)->next = NULL;
	}
	(*head)->next = (*a);
	(*a)->next = NULL;
	(*a)->prev = NULL; 
}