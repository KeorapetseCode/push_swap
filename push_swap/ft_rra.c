
#include "push_swap.h"

void	reverse_rotate_a(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
	int		temp;
	int		last_num;

	if ((*a) == NULL && head->next == NULL)
		return ;
	while ((*a) && (*a)->next != NULL)
		(*a) = (*a)->next;
	if (((*a) && (*a)->next == NULL) && ((*a)->prev == head))
		return ;
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
	ft_verify(a, b, head, b_head);
}