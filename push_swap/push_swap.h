/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/02 11:20:07 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/09/20 09:14:16 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "get_next_line/get_next_line.h"

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
void				check_dup(t_stack **a, t_stack *head);

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
void				three_nodes(t_stack **a, t_stack *head);
void				four_nodes(t_stack **a, t_stack **b, t_stack *head);
void				five_nodes(t_stack **a, t_stack **b, t_stack *head);
void				two_nodes(t_stack **a, t_stack *head);
void 				two_b_nodes(t_stack **b);

void				mult_nodes(t_stack **a, t_stack **b, t_stack *head);
int 				total_nodes(t_stack **a, t_stack *head);
int 				total_b_nodes(t_stack **b, t_stack *b_head);

int					*sorted_arr(int num_of_nodes, t_stack **a, t_stack *head);
int					*sorted_b_arr(int num_of_nodes, t_stack **b, t_stack *b_head);
int 				ceil_func(int i);
void				push_back(t_stack **a, t_stack **b, t_stack *head);
int					find_biggest(t_stack *b);
void				send_to_a(t_stack **a, t_stack **b, t_stack *head);
void				two_bnodes_left(t_stack **a, t_stack **b, t_stack *head);
void				five_b_nodes(t_stack **a, t_stack **b, t_stack *head);
void				four_b_nodes(t_stack **a, t_stack **b, t_stack *head);
void				three_b_nodes(t_stack **a, t_stack **b, t_stack *head);
void				rotate_backwards_b(t_stack **b, int *rb);
void 				rotate_forward_b(t_stack **b, int *rb);
void 				sort_two_b(t_stack **b);

void 				to_a(t_stack **a, t_stack **b, t_stack *head, int *i);
void 				to_b(t_stack **a, t_stack **b, t_stack *head, int *i);

void 				to_b(t_stack **a, t_stack **b, t_stack *head, int *i);
void 				rotate_backwards_a(t_stack **a, t_stack *head);
void 				rotate_forward_a(t_stack **a, t_stack *head);

#endif
