#include "push_swap.h"

int 	find_biggest(t_stack *b)
{
    t_stack temp;
	int 	big;

    temp.prev = b;
	big = b->num;
	if (temp.prev->prev == NULL)
		return(big);
	while (temp.prev->prev != NULL)
	{
		temp.prev = temp.prev->prev;
		if (temp.prev->num > big)
			big = temp.prev->num;
	}
	return (big);
}