
#include "get_next_line/get_next_line.h"
#include "libft/libft.h"

 typedef struct a_stack
{
	int num;
	struct a_stack *next;
	struct a_stack *prev;
}A_STACK;

A_STACK    *sort_first_two(A_STACK *f)
{
	int			temp_1;
	A_STACK		*struct_ptr;

	temp_1 = 0;
		if (f->next == NULL)
		ft_putendl("Only one structure found");
	else
	{
		if ((f->num) > (f->prev->num))
			{
				temp_1 = f->num;
				f->num = f->prev->num;
				f->prev->num = temp_1;
			}
	}
	return f;
}

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
			if (ft_strchr(input, "sa"))
				{
					temp = head.prev;
					temp = sort_first_two(temp);			
				}
			if ((ft_strstr(input, "OK") || ft_strstr(input, "ok")))
				return (0);
		}
		temp = head.prev;
		while (temp != NULL)
		{
			ft_putnbr(temp->num);
			ft_putchar('\n');
			temp = temp->prev;
		}
	}
	else
		ft_putendl("ERROR!\nNot enough arguments");
	return 0;
}
