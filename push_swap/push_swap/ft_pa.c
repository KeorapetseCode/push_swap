
#include "push_swap.h"

void	pushto_a(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
    STACK		*temp;
	STACK		*temp_b;

	if (!(*a) || (*a)->next == NULL)
	{
		(*a) = head->next;
		if (!(*a))
			return ;
	}
	if ((*b) != NULL)
	{
		make_blist(a, &temp_b, &head);
		temp_b->prev = (*b);
		(*b)->next = temp_b;
		(*b) = temp_b;
		temp_b = NULL;
	}
	else
	{
		make_blist(a, b, &head);
		(*b)->prev = NULL;
		b_head->next = (*b);
	}
}