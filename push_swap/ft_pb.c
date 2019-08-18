
#include "push_swap.h"

void	pushto_b(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
	STACK		*temp;

	if (!(*a) || (*a)->next == NULL)
	{
		(*a) = head->next;
		if (!(*a))
		{
			ft_putendl("Stack A Is EMpty!");
			return ;
		}
	}
	if ((*b))
		(*b) = (*b)->next;
	
	make_blist(b, b_head, (*a)->num);
	temp = (*a)->next;
	free((*a));	
	(*a) = temp;
	head->next = temp;
	free(temp);
}