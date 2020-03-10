
#include "push_swap.h"

int		*sort_ret(int *ret, int num_of_nodes)
{
	int 	i;
	int		a;
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
	return ret;
}

int 		*sorted_arr(int num_of_nodes, t_stack **a, t_stack *head){

	int 	*ret;
	int		i;

	i = 0;
	(*a) = head->next;
	ret = (int*)malloc((sizeof(int) * num_of_nodes) + 1);
	while (i < num_of_nodes)
	{
		ret[i] = (*a)->num;
		i++;
		(*a) = (*a)->next;
	}
	ret = sort_ret(ret, num_of_nodes);
	(*a) = head->next;
	return (ret);

}