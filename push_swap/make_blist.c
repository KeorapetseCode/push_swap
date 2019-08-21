
#include "push_swap.h"

void    make_blist(STACK **b, int num)
{
    (*b) = (STACK*)malloc(sizeof(STACK));
    (*b)->num = num;
    (*b)->next = NULL;
}