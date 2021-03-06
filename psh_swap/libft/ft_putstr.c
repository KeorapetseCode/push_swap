/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:47:46 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/06/18 10:48:17 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int		counta;

	counta = 0;
	if (s)
	{
		while (s[counta] != '\0')
		{
			write(1, &s[counta], 1);
			counta++;
		}
	}
}
