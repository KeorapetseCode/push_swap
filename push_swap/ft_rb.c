
#include "push_swap.h"

void		rotate_b(STACK **b)
{
    int     temp;
    int     last_num;

    if ((*b) == NULL)
        return ;
    while ((*b) && (*b)->next != NULL)
        (*b) = (*b)->next;
    if ((*b)->next == NULL && (*b)->prev == NULL)
    {
        ft_putendl("Only One Node In The List: Cannot rotate!!");
		return ;
    }
    last_num = (*b)->num;
    while ((*b))
    {
        (*b) = (*b)->prev;
        temp = (*b)->num;
        (*b)->next->num = temp;
        if ((*b)->prev == NULL)
            break ;
    }
    (*b)->num = last_num;
     while ((*b) && (*b)->next != NULL)
        (*b) = (*b)->next;
}