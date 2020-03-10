#include "push_swap.h"

void 	goto_first(t_stack **b, t_stack *b_head)
{
	(*b) = b_head->prev;
	while ((*b)->prev != NULL)
		(*b) = (*b)->prev;
}

int 	if_biggest(t_stack *b, int big)
{
	t_stack temp;

	temp.prev = b->prev; //temp equals to the next node.
	temp.next = NULL;
	if (temp.prev == NULL)
		return (0);
	while (temp.prev != NULL)
	{
		if (big >= temp.prev->num)
			temp.prev = temp.prev->prev;
		else
			return (0);
	}
	return (1);
}
	
void 	search_b_top(t_stack **a, t_stack **b, t_stack *head, int mid)
{	
	t_stack		b_head;
	int 		i;
	int 		rb;

	rb = 0;
	b_head.prev = (*b);
	b_head.next = NULL;

	if ((total_b_nodes(b, &b_head) % 2) == 0)
	    i = (total_b_nodes(b, &b_head) / 2);
	else
		i = ceil_func((total_b_nodes(b, &b_head) / 2));

//	i = (total_b_nodes(b, &b_head) - mid);
/*
	ft_putstr("Total Nodes at B ");
	ft_putnbr(total_b_nodes(b, &b_head));
	ft_putstr("\nAmount That Is supposed to be sent ");
	ft_putnbr(i);
	ft_putstr("\n");
	ft_putstr("My mid point value is ");
	ft_putnbr(mid);
	ft_putstr("\n\n");
	print_stacks(a, b, head);
	ft_putchar('\n');
*/	
	while (i > 0)
	{
		if ((*b)->num > mid)
		{
			if (if_biggest((*b), (*b)->num))
			{	
				pushto_a(a, b, head);
				ft_putendl_fd("pa", 1);
				b_head.prev = (*b); 
				i--;
				two_nodes(a, head);
				while (rb)
				{
					revrotate_b(b);
					ft_putendl_fd("rrb", 1);
				/*	if (if_biggest((*b), (*b)->num))
					{
						pushto_a(a, b, head);
						ft_putendl_fd("pa", 1);
						b_head.prev = (*b); 
						i--;
						two_nodes(a, head);
					}*/
					rb--;
				}
				b_head.prev = (*b);
			}
			else if (if_biggest((*b), (*b)->prev->num))
			{
				sort_first_two_b(b);
				b_head.prev = (*b);
				ft_putendl_fd("sb", 1);
			}
			else
			{
				rotate_b(b);
				ft_putendl_fd("rb", 1);
				b_head.prev = (*b);
				rb++;
			}
		}
		else if ((*b)->num <= mid)
		{
			rotate_b(b);
			ft_putendl_fd("rb", 1);
			b_head.prev = (*b);
			rb++;
		}
	}
	while (rb)
	{
		revrotate_b(b);
		ft_putendl_fd("rrb", 1);
		rb--;
	}
	push_back(a, b, head);
}

void	push_back(t_stack **a, t_stack **b, t_stack *head)
{
	t_stack		b_head;
	int 		*s;
	int 		half;
	int 		mid_index_val;
	
	b_head.prev = (*b);
	b_head.next = NULL;
	s = sorted_b_arr(total_b_nodes(b, &b_head), b, &b_head);
	half = ((total_b_nodes(b, &b_head)) / 2);
	mid_index_val = s[half-1];
	free(s);
	if (total_b_nodes(b, &b_head) > 2)
		search_b_top(a, b, head, mid_index_val);
//	else if (total_b_nodes(b, &b_head) == 5)
//		five_b_nodes(a, b, head);
//	else if (total_b_nodes(b, &b_head) == 4)
//		four_b_nodes(a, b, head);
//	else if (total_b_nodes(b, &b_head) == 3)
//		three_b_nodes(a, b, head);
	else if (total_b_nodes(b, &b_head) == 2)
		two_bnodes_left(a , b, head);
	else if (total_b_nodes(b, &b_head) == 1)
		send_to_a(a, b, head);
	s = NULL;
}
