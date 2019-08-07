
#include "push_swap.h"

void	pushto_b(A_STACK **a, B_STACK **b)
{
	A_STACK		*temp;

	temp = NULL;
	if ((*a) == NULL)
	{
		ft_putendl("Stack A Is Empty!");
		return ;
	}
	else
	{
		(*b) = (B_STACK*)malloc(sizeof(B_STACK));
		(*b)->num = (*a)->num;
		temp = (*a)->prev;
		free(*a);
		(*a) = temp;
		free(temp);	
	}
}