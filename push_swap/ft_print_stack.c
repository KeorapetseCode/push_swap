

#include "push_swap.h"

void    ft_print_stack(A_STACK *p)
{
    while (p != NULL)
    {
        ft_putnbr(p->num);
        ft_putchar('\n');
        p = p->prev;
    }
}