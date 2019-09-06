
#include "push_swap.h"

int     check_num(char *str)
{
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if (!(ft_isdigit(str[i])))
        {
            ft_putendl("Error!\nInput Not A Number");
            return (0);
        }
        i++;
    }
    return (1);
}