

#include "push_swap.h"

void	make_alist(STACK **a, STACK *head, char *str)
{
	(*a) = (STACK*)malloc(sizeof(STACK));
	(*a)->num = ft_atoi(str);
	(*a)->next = NULL;
	(*a)->prev = head->prev;
	head->prev = (*a);
	(*a)->prev->next = (*a);
}