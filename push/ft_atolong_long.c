/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolong_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:22:21 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/14 15:53:55 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long		ft_atolong_long(const char *str)
{
	long long	returna;
	long long	neg;

	returna = 0;
	neg = 1;
	if (!(*str))
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		returna = (returna * 10) + (*str - 48);
		str++;
	}
	return (returna * neg);
}
