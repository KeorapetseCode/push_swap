/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 15:47:09 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 15:09:49 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ls_isnum(int argc, char **argv)
{
	char	*c;
	int		i;

	argc -= 1;
	while (argc > 0)
	{
		i = 0;
		c = ft_strtrim(argv[argc]);
		while (c[i] != '\0')
		{
			if ((ft_isdigit(c[i])) == 0)
			{
				ft_putendl_fd("Error", 2);
				exit(0);
			}
			i++;
		}
		argc--;
		ft_strdel(&c);
	}
}
