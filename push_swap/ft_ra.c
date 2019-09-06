
#include "push_swap.h"

void	rotate_a(STACK **a, STACK *head)
{
	int		temp;
	int		start_num;

	if ((*a) && (*a)->next == NULL)
		(*a) = head->next;
	if ((*a)->next == NULL && (*a)->prev == head)
		{
			ft_putendl("Only One Node In The List!!");
			return ;
		}
	(*a) = head->next;
	start_num = (*a)->num;
	while ((*a))
	{
		(*a) = (*a)->next;
		temp = (*a)->num;
		(*a)->prev->num = temp;
		if ((*a)->next == NULL)
			break;
	}
	(*a)->num = start_num;
}