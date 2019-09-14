/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:20:07 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/08/02 11:26:05 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "get_next_line/get_next_line.h"
# include "libft/libft.h"

typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

int					check_num(char *str);
int					get_input(t_stack **a, t_stack *head);
long long			ft_atolong_long(const char *str);
void				print_stacks(t_stack **a, t_stack **b, t_stack *head);
void				return_list(t_stack **a, t_stack **b, t_stack **head);

void				sort_first_two(t_stack **a, t_stack *head);
void				sort_first_two_b(t_stack **b);

void				make_alist(t_stack **a, t_stack *head, char *str);
void				make_blist(t_stack **a, t_stack **b, t_stack **head);

void				pushto_b(t_stack **a, t_stack **b, t_stack *head);
void				pushto_a(t_stack **a, t_stack **b, t_stack *head);

void				rotate_a(t_stack **a, t_stack *head);
void				rotate_b(t_stack **b);

void				revrotate_a(t_stack **a, t_stack *head);
void				revrotate_b(t_stack **b);
void				ft_verify(t_stack **a, t_stack **b, t_stack *head);
void				ft_sort_list(t_stack **a, t_stack **b, t_stack *head);

#endif
