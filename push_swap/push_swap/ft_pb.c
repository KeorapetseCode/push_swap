
#include "push_swap.h"

void	pushto_b(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
	STACK		*temp;
 
	if (((*a) && (*a)->next == NULL) || (*a) == NULL)
		(*a) = head->next;

	if ((*a) == NULL)
	{
		ft_putstr("Nothing In Stack");
		return ;
	}
	if ((*b) != NULL)
	{
		make_blist(a, &temp, &head, &b_head);
		temp->prev = (*b);
		(*b)->next = temp;
		(*b) = temp;
		temp = NULL;
	}
	else
		make_blist(a, b, &head, &b_head);
}