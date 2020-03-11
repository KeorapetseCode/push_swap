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
	    i = (total_b_nodes(b, &b_head) / 6);
	else
		i = ceil_func((total_b_nodes(b, &b_head) / 6));	
	while (i > 0)
	{
		if ((*b)->num > mid)
		{
			if (if_biggest((*b), (*b)->num))
			{	
				to_a(a, b, head, &i);
				while (rb)
				{
					rotate_backwards_b(b, &rb);
					if (if_biggest((*b), (*b)->num))
						to_a(a, b, head, &i);
				}
			}
			else if (if_biggest((*b), (*b)->prev->num))
				sort_two_b(b);
			else
				rotate_forward_b(b, &rb);
		}
		else if ((*b)->num <= mid)
			rotate_forward_b(b, &rb);
	}
	while (rb)
		rotate_backwards_b(b, &rb);
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
	half = ((total_b_nodes(b, &b_head)) / 6);
	mid_index_val = s[half-1];
	free(s);
	if (total_b_nodes(b, &b_head) > 5)
		search_b_top(a, b, head, mid_index_val);
	else if (total_b_nodes(b, &b_head) == 5)
		five_b_nodes(a, b, head);
	else if (total_b_nodes(b, &b_head) == 4)
		four_b_nodes(a, b, head);
	else if (total_b_nodes(b, &b_head) == 3)
		three_b_nodes(a, b, head);
	else if (total_b_nodes(b, &b_head) == 2)
		two_bnodes_left(a , b, head);
	else if (total_b_nodes(b, &b_head) == 1)
		send_to_a(a, b, head);
	s = NULL;
	exit(0);
}
