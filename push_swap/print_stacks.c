
#include "push_swap.h"

void    print_stacks(A_STACK **a, A_STACK head, B_STACK **b)
{
    if ((*a)->next == NULL)
        (*a) = head.next;
    ft_putendl("__  __");
    while ((*a) != NULL)
    {
        ft_putnbr((*a)->num);
        ft_putstr("   ");
        if ((*b) != NULL)
        {
            ft_putnbr((*b)->num);
            (*b) = (*b)->next;
        }
        ft_putchar('\n');
        (*a) = (*a)->next;
    }
        ft_putstr("\nA   B\n");
        ft_putendl("--  --\n");
}