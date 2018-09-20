/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:12:16 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 09:12:18 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>

typedef struct 		s_stack
{
	int				num;
	struct s_stack 	*next;
}					t_stack;

void	push(t_stack **stack_a, t_stack *node);
void	sa_sb(t_stack **stack_a, t_stack **stack_b);
void	swap(t_stack **stack);
void    rotate(t_stack **stack);
void    ra_rb(t_stack **stack_a, t_stack **stack_b);
void    rev_rotate(t_stack **stack);
void	rev_rotate_ab(t_stack **stack_a, t_stack **stack_b);

int		is_num(char *str);
int		empty(char *str);
int		sorted(t_stack *stack);
int		has_dup(int ac, char **av);
int		is_max(int ac, char **av);
int		valid(int ac, char **av);

t_stack	*make_stack(int ac, char **av);
void	del_stack(t_stack *stack);
void	print_stack(t_stack **stack);
void	do_op(char *op, t_stack **stack_a, t_stack **stack_b);

int		check_ops(char *op);

#endif
