
//#include "get_next_line/get_next_line.h"
//#include "get_next_line/libft/libft.h"
//#include "libft/libft.h"

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int 		counta;
	int			i;
	char		*input;
	A_STACK 	*temp;
	A_STACK		head;
	
	i = 0;
	counta = 1;
	head.next = &head;
	head.prev = &head;
	if (argc > 1)
	{
		while (counta < argc)
		{
			while (argv[counta][i] != '\0')
			{
				if (!(ft_isdigit(argv[counta][i])))
				{
					ft_putendl("ERROR\nInput Not A Number!");
					return (0);
				}
				i++;
				if (argv[counta][i] == '\0')
				{
					temp = (A_STACK*)malloc(sizeof(A_STACK));
					temp->num = ft_atoi(argv[counta]);
					temp->next = head.next;
					head.next = temp;
					temp->prev = NULL;
					temp->next->prev = temp;
				}
			}
			i = 0;
			counta++;
		}
		while (get_next_line(0, &input))
		{
			if (ft_strstr(input, "sa"))
				{
					temp = head.prev;
					temp = sort_first_two(temp);
				}
			if (ft_strstr(input, "print"))
				{
					temp = head.prev;
					ft_print_stack(temp);
				}
			if ((ft_strstr(input, "DONE") || ft_strstr(input, "done")))		
		}
	}
	else
		ft_putendl("ERROR!\nNot enough arguments");
	return 0;
}
