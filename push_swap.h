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
# define DEFINE_PUSH_SWAP_H
# include "libft/libft.h"
# include <stdlib.h>

typedef struct 		s_list
{
	int				num;
	struct s_list 	*next
}					t_list;

void	push_a(t_list **stack_a, t_list **stack_b);
void	sa_sb(t_list **stack_a, t_list **stack_b);
void	swap(t_list *stack);
void    rotate(t_list **stack_a);
void    ra_rb(t_list **stack_a, t_list **stack_b);
void    rev_rotate(t_list **stack);

#endif
