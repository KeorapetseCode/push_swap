
#include "push_swap.h"

void    reverse_rotate_b(STACK **b, STACK *b_head)
{
    int     temp;
    int     start_num;

    if ((*b) == NULL)
    {
        ft_putendl("Nothing In B");
        return ;
    }
    if ((*b) && (*b)->next == NULL)
        (*b) = b_head->next;
    if ((*b)->next == NULL && (*b)->prev == NULL)
    {
        ft_putendl("Only One node in the list");
        return ;
    }
    start_num = (*b)->num;
    while ((*b))
    {
        (*b) = (*b)->next;
        temp = (*b)->num;
        (*b)->prev->num = temp;
        if ((*b)->next == NULL)
            break ;
    }
    (*b)->num = start_num;
}