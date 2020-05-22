#include "push_swap.h"

void		next_to_top(t_lst **stack, t_lst *temp){
	t_lst	*temp2;

	temp2 = *stack;
	while ((*stack)->content != temp->content)
	{
		if ((*stack)->content > (*stack)->next->content)
            swap(stack);
		rrot(stack);
	}
	(*stack)->c = 'a';
	(*stack)->in_pair = 'y';
	temp2 = *stack;
	while(temp2->next->in_pair != 'y')
	{
		swap(stack);
		rot(stack);
	}
	if ((*stack)->pos == ((*stack)->next->pos - 1))
	{
		(*stack)->next->c = 'x';
		(*stack)->c = 'e';
	}
}

void		find_next(t_lst **stack)
{
	t_lst	*temp;
	t_lst	*top;
	int		i;

	temp = *stack;
	top = *stack;
	i = 1;
	while ((ft_strequ(ls_verify(*stack), "KO")))
	{
		while (temp != NULL)
		{
			if (temp->in_pair == 'n' && next_big(temp, top))
			{
				next_to_top(stack, temp);
				break ;
			}
			temp = temp->next;
			i++;
		}
		i = 0;
		temp = *stack;
	}
}