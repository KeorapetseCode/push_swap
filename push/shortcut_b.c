#include "push_swap.h"

void 		to_a(t_stack **a, t_stack **b, t_stack *head, int *i)
{
	pushto_a(a, b, head);
	ft_putendl_fd("pa", 1);
	(*i)--;
	two_nodes(a, head);
}

void 	rotate_backwards_b(t_stack **b, int *rb)
{
	revrotate_b(b);
	ft_putendl_fd("rrb", 1);
	(*rb)--;
}

void 	rotate_forward_b(t_stack **b, int *rb)
{
	rotate_b(b);
	ft_putendl_fd("rb", 1);
	(*rb)++;
}

void 	sort_two_b(t_stack **b)
{
	sort_first_two_b(b);
	ft_putendl_fd("sb", 1);
}