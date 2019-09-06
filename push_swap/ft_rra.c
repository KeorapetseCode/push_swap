
#include "push_swap.h"

void	reverse_rotate_a(STACK **a, STACK *head)
{
	int		temp;
	int		last_num;

	if ((*a) == NULL)
	{
		ft_putendl(" A is Null");
		return ;
	}
	while ((*a) && (*a)->next != NULL)
		(*a) = (*a)->next;
	if ((*a) && (*a)->next == NULL && (*a)->prev == head)
	{
		ft_putendl("Only One Node In The List: Cannot rotate!!");
		return ;
	}
	last_num = (*a)->num;
	while ((*a))
	{
		(*a) = (*a)->prev;
		temp = (*a)->num;
		(*a)->next->num = temp;
		if ((*a)->prev == head || (*a)->prev == NULL)
			break;
	}
	(*a)->num = last_num;
}