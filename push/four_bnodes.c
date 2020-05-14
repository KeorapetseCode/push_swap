#include "push_swap.h"

void	push_br_down(t_stack **a, t_stack **b, t_stack *head, int maxim)
{
	while ((*b)->num != maxim)
	{
		revrotate_b(b);
		ft_putendl_fd("rrb", 1);
	}
	if ((*b)->num == maxim)
	{
		pushto_a(a, b, head);
		ft_putendl_fd("pa", 1);
	}
	three_b_nodes(a, b, head);
}

void	push_br_up(t_stack **a, t_stack **b, t_stack *head, int maxim)
{
	if ((*b)->num != maxim)
	{
		rotate_b(b);
		ft_putendl_fd("rb", 1);
	}
	pushto_a(a, b, head);
	ft_putendl_fd("pa", 1);
	three_b_nodes(a, b, head);
}

void	four_b_nodes(t_stack **a, t_stack **b, t_stack *head)
{
	t_stack 	temp;
	int 		pos;
	int 		big_num;

	pos = 1;
	temp.prev = (*b);
	big_num = find_biggest((*b));
	while ((*b))
	{
		if ((*b)->num == big_num)
			break ;
		(*b) = (*b)->prev;
		pos++;
	}
	(*b) = temp.prev;	
	if (pos == 1 || pos == 2)
		push_br_up(a, b, head, big_num);
	else if (pos == 3 || pos == 4)
		push_br_down(a, b, head, big_num);	
}
