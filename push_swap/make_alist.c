
#include "push_swap.h"

void	make_alist(STACK **a, STACK *head, char *str)
{
	if (!((*a) = (STACK*)malloc(sizeof(STACK))))
	{
		ft_putendl("ERROR!! Can't malloc");
		exit(0);
	}
	(*a)->num = ft_atoi(str);
	if ((*a)->num > 2147483647)
	{
		ft_putendl_fd("Error!!\nINT MAX", 2);
		exit(0);
	}
	(*a)->next = NULL;
	(*a)->prev = head->prev;
	head->prev = (*a);
	(*a)->prev->next = (*a);
}