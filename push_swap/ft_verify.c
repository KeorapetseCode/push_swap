
#include "push_swap.h"

void 	check_dup(STACK **a, STACK *head);

void	ft_verify(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
	if (b_head->next == NULL && (*b) == NULL)
	{
		if (head->next)
			(*a) = head->next;
		while ((*a)->next)
		{
			if ((*a)->num <= (*a)->next->num)
				(*a) = (*a)->next;
			else
			{
				(*a) = head->next;
				return ;
			}
		}
		check_dup(a, head);
		ft_putendl("Sorted");
		exit(0);
	}
}

void 	check_dup(STACK **a, STACK *head)
{
	(*a) = head->next;
	while ((*a)->next)
	{
		if ((*a)->num == (*a)->next->num)
		{
			ft_putendl_fd("Error Found Duplicate", 2);
			exit(0);
		}
		(*a) = (*a)->next;
	}
}