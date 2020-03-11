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
/*
	ft_putstr("Total Nodes at A ");
	ft_putnbr(total_nodes(a, head));
	ft_putstr("\nAmount That Is supposed to be sent ");
	ft_putnbr(i);
	ft_putstr("\n");
	ft_putstr("My mid point value is ");
	ft_putnbr(mid);
	ft_putstr("\n\n");
	print_stacks(a, b, head);
	ft_putstr("\n");
*/
	while (i > 0)
	{
		if ((*a)->num < mid)
		{
			pushto_b(a, b, head);
			ft_putendl_fd("pb", 1);
			two_b_nodes(b);
			i--;
		}
		else
		{
			goto_last(a, head);
			if ((*a)->num < mid)
			{
				(*a) = head->next;
				revrotate_a(a, head);
				ft_putendl_fd("rra", 1);
			}
			else
			{
				rotate_a(a, head);
				ft_putendl_fd("ra", 1);
			}
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
//	else if (total_nodes(a, head) == 4)
//		four_nodes(a, b, head);
/*	else if (total_nodes(a, head) == 3)
		three_nodes(a, head);
	else if (total_nodes(a, head) == 2)
		two_nodes(a, head);
*/
//	print_stacks(a, b, head);
//	exit(0);
	push_back(a, b, head);
}
