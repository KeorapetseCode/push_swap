
#include "push_swap.h"

void	sort_first_two_b(STACK **b, STACK *b_head)
{
	int			temp;

	if ((*b) == NULL && b_head->next == NULL)
	{
		ft_putendl("Nothing In The STACK");
		return ;
	}
	if ((*b) == NULL && (*b)->next)
		(*b) = (*b)->next;
	if ((*b)->next == NULL && (*b)->prev == NULL)
		{
			ft_putstr("Only One Node in List");
			return ;
		}
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
	if (((*b)->num) && ((*b)->prev->num))
	{
		temp = (*b)->num;
		(*b)->num = (*b)->prev->num;
		(*b)->prev->num = temp;
	}
}