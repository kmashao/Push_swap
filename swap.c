/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:50:33 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 09:50:38 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.h"

void	swap_a(t_list **stack_a)
{
	t_list *swap;

	if ( *stack_a && (*stack_a)->next)
	{
		swap = *stack_a;
		*stack_a = (*stack_a)->next;
		swap->next = (*stack_a)->next;
		(*stack_a)->next = swap;
	}
}

void	swap_b(t_list *stack_b)
{
	t_list	*swap;

	if (*stack_b && (*stack_b)->next)
	{
		swap = *stack_b;
		*stack_b = (*stack_b)->next;
		swap->next = (*stack_b)->next;
		(*stack_b)->next = swap;
	}
}

void	sa_sb(t_list **stack_a, t_list **stack_b)
{
	swap_a(&(*stack_a));
	swap_b(&(*stack_b));
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list *swap;

	if (*stack_b)
	{
		swap = *stack_a;
		*stack_a = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_a)->next = swap; 
	}
}

void	push_a(t_list **stack_a, t_list stack_b)
{
	t_list *swap;

	if (*stack_a)
	{
		swap = *stack_b;
		*stack_b = stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_b)->next = swap;
	}
}