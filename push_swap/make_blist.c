
#include "push_swap.h"

void    make_blist(STACK **b, STACK *b_head, int num)
{
    (*b) = (STACK*)malloc(sizeof(STACK));
    (*b)->num = num;
    (*b)->next = NULL;
    (*b)->prev = b_head->prev;
    b_head->prev = (*b);
    (*b)->prev->next = (*b);
}