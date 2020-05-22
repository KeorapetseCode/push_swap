#include "push_swap.h"

void			taketotop(t_lst **stack)
{
	t_lst	*top;
	t_lst	*temp;
	int		i;

	top = *stack;
	temp = *stack;
	i = 1;
	while (temp != NULL)
	{
		if (temp->in_pair == 'n' && next_big(temp, top))
		{
			if (i < (ls_countlist(*stack) / 2))
				while((*stack)->content != temp->content)
					rot(stack);
			else
				while((*stack)->content != temp->content)
					rrot(stack);
			(*stack)->c = 'a';
			(*stack)->in_pair = 'y';
			return ;
		}
		temp = temp->next;
		i++;
	}
}