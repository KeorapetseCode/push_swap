/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_long.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:15:11 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/15 14:41:49 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long		atoi_long(const char *str)
{
	int			i;
	int			n;
	long long	r;

	i = 0;
	n = 1;
	r = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\t'
			|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		n = n * (-1);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		r = (r * 10) + (str[i] - 48);
		i++;
	}
	r = n * r;
	return (r);
}
