
#include "push_swap.h"

int		main(int argc, char **argv)
{
	int			counta;
	int			i;
	char		*input;

	A_STACK 	*ptr_a;
	A_STACK		head;
	B_STACK		*ptr_b;
	B_STACK		b_head;

	i = 0;
	counta = 1;
	head.next = &head;
	head.prev = &head;
	
	b_head.next = &b_head;
	b_head.prev = &b_head;
	ptr_b = NULL;
	

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
					ptr_a = (A_STACK*)malloc(sizeof(A_STACK));
					ptr_a->num = ft_atoi(argv[counta]);
					ptr_a->next = NULL;
					ptr_a->prev = head.prev;
					head.prev = ptr_a;
					ptr_a->prev->next = ptr_a;
				}
			}
			i = 0;
			counta++;
		}
		while (get_next_line(0, &input))
		{
			if (ft_strnstr(input, "sa", 2))
				ptr_a = sort_first_two(&ptr_a, head);
			
			if (ft_strnstr(input, "pb", 2))
				pushto_b(&ptr_a, head, &ptr_b);

			if (ft_strnstr(input, "print", 5))
				print_stacks(&ptr_a, head, &ptr_b);
			
			if ((ft_strnstr(input, "DONE", 4) || ft_strnstr(input, "done", 4)))
				return (0);
		}
	}
	else
		ft_putendl("ERROR!\nNot enough arguments");
	return 0;
}