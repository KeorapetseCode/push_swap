
#include "push_swap.h"

void	pushto_b(STACK **a, STACK **b, STACK *head)
{
	STACK		*temp;

	if ((*a) == NULL && head->next == NULL)
	{
		ft_putstr("Nothing In Stack");
		return ;
	}
	if (((*a) && (*a)->next == NULL) || ((*a) == NULL && (*a)->prev))
		(*a) = head->next;
	if ((*b) != NULL)
	{
		make_blist(a, &temp, &head);
		temp->prev = (*b);
		(*b)->next = temp;
		(*b) = temp;
		temp = NULL;
	}
	else
		make_blist(a, b, &head);
}