#include "push_swap.h"

void	two_nodes(t_stack **a, t_stack *head)
{
	(*a) = head->next;
	if (((*a)->num) > ((*a)->next->num))
	{
		ft_putendl_fd("sa", 1);
		sort_first_two(a, head);
	}
}

void 	two_b_nodes(t_stack **b)
{
	if ((*b) && (*b)->prev)
	{
		if ((*b)->num < (*b)->prev->num)
		{
			ft_putendl_fd("sb", 1);
			sort_first_two_b(b);
		}
	}
}

void 	send_to_a(t_stack **a, t_stack **b, t_stack *head)
{
	pushto_a(a, b, head);
	ft_putendl_fd("pa", 1);
}

void 	two_bnodes_left(t_stack **a, t_stack **b, t_stack *head)
{
//	ft_putstr("\n");
//	ft_putstr("Now in Two\n");
//	print_stacks(a, b, head);
//	ft_putstr("\n\n");

	if ((*b) && (*b)->prev)
	{
		if ((*b)->num >= (*b)->prev->num)
		{
			send_to_a(a, b, head);
			send_to_a(a, b, head);
		}
		else
		{
			two_b_nodes(b);
			two_nodes(a, head);				
			send_to_a(a, b, head);
			send_to_a(a, b, head);
		}
	}
/*	
	ft_putstr("\n");
	ft_putstr("Now in Last\n");
	print_stacks(a, b, head);
	ft_putstr("\n\n");
*/
}