#include "push_swap.h"
int			check_position2(t_lst *compared, t_lst *iter){
	if (compared->pos2 != 0)
		return (0);
	while (iter != NULL){
		if (iter->pos2 == 0 && iter->content < compared->content)
			return (0);
		iter = iter->next;
	}
	return (1);
}

void		lst_index2(t_lst *stack)
{
	int		i;
	int		pos;
	int 	ret;
	t_lst	*compared;
	t_lst	*iter;

	i = ls_countlist(stack);
	compared = stack;
	ret = 0;
	pos = 1;
	while (i)
	{
		iter = stack;
		ret = check_position2(compared, iter);
		if (ret == 1){
			compared->pos2 = pos;
			i--;
			pos++;
			ret = 0;
		}
		if(compared->next == NULL && i != 0)
			compared = stack;
		else
			compared = compared->next;
	}
}
