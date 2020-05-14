
#include "push_swap.h"

int 	*sort_ar(int *ret, int num_of_nodes)
{
	int 	i;
	int 	a;
	int 	temp;

	i = 0;
	a = 0;
	temp = ret[i];
	while (i < num_of_nodes)
	{
		while (a < num_of_nodes)
		{
			if (ret[a] > ret[i])
			{
				temp = ret[a];
				ret[a] = ret[i];
				ret[i] = temp;
			}
			a++;
		}
		a = 0;
		i++;
	}
	return (ret);
}

int		*sorted_b_arr(int num_of_nodes, t_stack **b, t_stack *b_head)
{
	int 	*ret;
	int 	i;

	i = 0;
	(*b) = b_head->prev;
	ret = (int*)malloc((sizeof(int) * num_of_nodes) + sizeof(int));
	while (i < num_of_nodes)
	{
		ret[i] = (*b)->num;
		i++;
		if ((*b)->prev == NULL)
			break ;
		(*b) = (*b)->prev;
	}
	(*b) = b_head->prev;
	ret = sort_ar(ret, num_of_nodes);
	return (ret);
}
