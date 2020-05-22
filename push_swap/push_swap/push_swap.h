/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshabang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:24:16 by lshabang          #+#    #+#             */
/*   Updated: 2019/09/22 14:50:01 by lshabang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct		s_lst
{
	int				content;
	int				pos;
	int				pos2;
	char			c;
	char			in_pair;
	char			from_pair;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_lst;

int					ls_countlist(t_lst *stack);
int					ls_isbignum(t_lst *big, t_lst *head);
int					ls_isdupnum(t_lst *stack);
void				ls_isnum(int argc, char **argv);
void				ls_isnum1(int argc, char **argv);
int					ls_issmallnum(t_lst *small, t_lst *head);
int					ls_short_way(t_lst *stack);
void				ls_lstadd(t_lst **alst, t_lst **new);
t_lst				*ls_lstnew(int num);
void				ls_swap(t_lst **stack);
void				ls_push(t_lst **dst, t_lst **src);
void				ls_rev_rot(t_lst **stack);
void				ls_rotate(t_lst **stack);
void				ls_sort_three(t_lst **stack);
t_lst				*ls_stack(int argc, char **argv);
t_lst				*ls_tosplit(char **argv);
char				*ls_verify(t_lst *head);
void				ls_print(t_lst *stack);
void				sort_t_o(t_lst *stack);
void				sort_top(t_lst *stack_a, t_lst *stack_b);
long long			atoi_long(const char *str);
int					is_int(long long num);
void				lst_index(t_lst *stack);
void				lst_index2(t_lst *stack);
char				**one_c(char **argv);
void				taketotop(t_lst **stack);
void				rrot(t_lst **stack);
void				rot(t_lst **stack);
void				swap(t_lst **stack);
void				find_next(t_lst **stack);
void				return_nums(t_lst **stack_a, t_lst **stack_b, int last);
void				find_last_first(t_lst **stack_a, t_lst **stack_b, int last);
void				command(t_lst **stack_a, t_lst **stack_b);
int					next_big(t_lst *big, t_lst *head);

#endif
