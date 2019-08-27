
#include "push_swap.h"

void pushto_a(STACK **a, STACK **b, STACK *head, STACK *b_head)
{
    STACK   *temp_a;
    STACK   *temp_b;

    if (!(*b) || (*b)->next == NULL)
    {
        (*b) = b_head->next;
        if (!(*b))
            return ;
    }
    if ((*a) != NULL)
    {
        make_astruct(&temp_a, (*b)->num);
        temp_a->prev = (*a);
        (*a)->next = temp_a;
        (*a) = temp_a;
        temp_a = NULL;

        temp_b = (*b)->next;
        free((*b));
        (*b) = temp_b;
        b_head->next = temp_b;
    }
    else
    {
        make_astruct(a, (*b)->num);
        (*a)
    }
    
}