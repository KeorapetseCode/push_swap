
#include "push_swap.h"

void	pushto_a(STACK **a, STACK **b, STACK *head)
{
    STACK		*temp;

    if ((*b) == NULL)
    {
    	ft_putendl("Nothing In STACK");
    	return ;
    }
	while ((*b) && (*b)->next != NULL)
		(*b) = (*b)->next;
	if ((*a) == NULL && ((*b) && (*b)->next == NULL))
		return_list(a, b, &head);
	else if ((*a) != NULL && ((*b) && (*b)->next == NULL))
	{
		(*a) = head->next;
		return_list(&temp, b, &head);
		(*a)->prev = temp;
		temp->next = (*a);
		head->next = temp;
		(*a) = head->next;
		temp = NULL;
	}
	ft_verify(a, b, head);
}