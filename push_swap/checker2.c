

//#include "libft/libft.h"
#include <stdio.h>
#include "get_next_line/get_next_line.h"

int main(int argc, char **argv)
{
	int		counta;
	int		i;
	int		a_stack[argc - 1];
	char	*input;

	i = 0;
	counta = 1;
	if (argc > 1)
	{
		while (counta < argc)
		{
			while (argv[counta][i] != '\0')
			{
				if (!(ft_isdigit(argv[counta][i])))
				{
					ft_putendl("Error\nInput Not A Number!");
					return (0);
				}
				i++;
				if (argv[counta][i] == '\0')
					a_stack[counta - 1] = ft_atoi(argv[counta]);
			}
			i = 0;
			counta++;
		}
		while (get_next_line(0, &input))
		{
			if (ft_strstr(input, "OK") || ft_strstr(input, "ok"))
				return 0;
		//	ft_putendl(input);
		}
	}
	else
		ft_putendl("Error!\nNot enough arguments");
	return (0);
}