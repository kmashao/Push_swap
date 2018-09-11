/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap && push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:40:39 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 14:40:43 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list *stack)
{
	t_list	*swap;

	if (*stack && (*stack)->next)
	{
		swap = *stack;
		*stack = (*stack)->next;
		swap->next = (*stack)->next;
		(*stack)->next = swap;
	}
}

void	sa_sb(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list *swap;

	if (*stack_b)
	{
		swap = (*stack_a);
		(*stack_a) = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		(*stack_a)->next = swap; 
	}
}
