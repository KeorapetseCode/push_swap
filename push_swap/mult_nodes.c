#include "push_swap.h"

void 		goto_last(t_stack **a, t_stack *head)
{
	(*a) = head->next;
	while ((*a)->next != NULL)
		(*a) = (*a)->next;
}

void 		search_top(t_stack **a, t_stack **b, t_stack *head, int mid)
{
	int 	i;

	i = (total_nodes(a, head) / 6);
	while (i > 0)
	{/*
		ft_putchar('\n');
		print_stacks(a, b, head);
		ft_putchar('\n');
		ft_putstr("mid = ");
		ft_putnbr(mid);
		ft_putchar('\n');
		ft_putstr("i = ");
		ft_putnbr(i);
		ft_putchar('\n');*/
		if ((*a)->num < mid)
			to_b(a, b, head, &i);
		else
		{
			goto_last(a, head);
			if ((*a)->num < mid)
			{
				(*a) = head->next;
				rotate_backwards_a(a, head);
			}
			else
				rotate_forward_a(a, head);
		}
	}
	mult_nodes(a, b, head);
}

void		mult_nodes(t_stack **a, t_stack **b, t_stack *head)
{
	int 	mid_index;
	int 	*s_arr;
	int 	half;

	s_arr = sorted_arr(total_nodes(a, head), a, head);
	half = ((total_nodes(a, head)) / 6);
	mid_index = s_arr[half];
	free(s_arr);
	s_arr = NULL;
	if (total_nodes(a, head) > 5)
		search_top(a, b, head, mid_index);
	else if (total_nodes(a, head) == 5)
		five_nodes(a, b, head);
	push_back(a, b, head);
}
