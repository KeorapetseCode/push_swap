
#include "push_swap.h"

void	pushto_b(A_STACK **a, A_STACK head, B_STACK **b)
{
	A_STACK		*temp;

	temp = NULL;
	if ((*a)->next == NULL)
		(*a) = head.next;

	if ((*a) == NULL && (*b) == NULL)
	{
		ft_putendl("Stack A Is Empty!");
		return ;
	}
	if ((*a) != NULL && (*b) == NULL)
	{
		(*b) = (B_STACK*)malloc(sizeof(B_STACK));
		(*b)->num = (*a)->num;
 
		temp = (*a)->next;
		free((*a));
		(*a) = temp;
	}
	/* 
	else if ((*a) != NULL && (*b) != NULL)
	{
		(*b) = (*b)->prev;
		(*b) = (B_STACK*)malloc(sizeof(B_STACK));
		(*b)->num = (*a)->num;
		(*a) = (*a)->next;
	}
	*/
}