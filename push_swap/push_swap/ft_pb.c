
#include "push_swap.h"

void	pushto_b(STACK **a, STACK **b, STACK *head, STACK *b_head)
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
		make_blist(&temp_b, (*a)->num);
		temp_b->prev = (*b);
		(*b)->next = temp_b;
		(*b) = temp_b;
		temp_b = NULL;

		temp = (*a)->next;
		free((*a));
		(*a) = temp;
		head->next = temp;
	}
	else
	{
		make_blist(b, (*a)->num);
		(*b)->prev = NULL;
		b_head->next = (*b);

		temp = (*a)->next;
		free((*a));
		(*a) = temp;
		head->next = temp;
	}
}