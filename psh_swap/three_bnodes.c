#include "push_swap.h"

int 		valueof_first_node(t_stack **b)
{
	t_stack 	temp;
	int 		x;

	temp.prev = (*b);
	while ((*b)->prev != NULL)
		(*b) = (*b)->prev;
	x = (*b)->num;
	(*b) = temp.prev;
	return (x);
}

void 		thirdnum_big(t_stack **a, t_stack **b, t_stack *head, int third_num)
{
	if ((*b)->num > (*b)->prev->num)
	{
		if ((third_num > (*b)->num) && (third_num > (*b)->prev->num))
		{
			revrotate_b(b);
			ft_putendl_fd("rrb", 1);
			pushto_a(a, b, head);
			ft_putendl_fd("pa", 1);
			two_bnodes_left(a, b, head);
			exit(0);
			//if the third node is the biggest
		}
		else if ((third_num < (*b)->num) && (third_num > (*b)->prev->num))
		{
			pushto_a(a, b, head);
			ft_putendl_fd("pa", 1);
			two_bnodes_left(a, b, head);
			exit(0);
			//If the first node is the biggest
		}
	}
}

void		three_b_nodes(t_stack **a, t_stack **b, t_stack *head)
{
/*
	ft_putstr("\n");
	ft_putstr("Now in Three\n");
	print_stacks(a, b, head);
	ft_putstr("\n\n");
	*/
	int 	third_num;

	third_num = valueof_first_node(b);
	if ((*b)->num < (*b)->prev->num)
	{
		if ((third_num < (*b)->num) && (third_num < (*b)->prev->num))
		{
			sort_first_two_b(b);
			ft_putendl_fd("sb", 1);//if the third node is smallest
		}
		else if ((third_num > (*b)->num) && (third_num > (*b)->prev->num))
		{
			sort_first_two_b(b);
			ft_putendl_fd("sb", 1);
			revrotate_b(b);
			ft_putendl_fd("rrb", 1);
			//if third node is biggest and the second node is the second biggest 
		}
		else if ((third_num > (*b)->num) && (third_num < (*b)->prev->num))
		{
			rotate_b(b);
			ft_putendl_fd("rb", 1);
			//if the third node is bigger than the first one but smaller than second
		}
	}
	else
		thirdnum_big(a, b, head, third_num);
}