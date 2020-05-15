#include "push_swap.h"

void 	to_b(t_stack **a, t_stack **b, t_stack *head, int *i)
{
	pushto_b(a, b, head);
	ft_putendl_fd("pb", 1);
	two_b_nodes(b);
	(*i)--;
}

void 	rotate_backwards_a(t_stack **a, t_stack *head)
{
	revrotate_a(a, head);
	ft_putendl_fd("rra", 1);
}

void 	rotate_forward_a(t_stack **a, t_stack *head)
{
	rotate_a(a, head);
	ft_putendl_fd("ra", 1);
}