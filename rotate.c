/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:15:13 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:15:15 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_stack **stack)
{
	t_stack *first;
	t_stack *last;

	first = NULL;
	last = NULL;


	if ((*stack) && (*stack)->next)
	{
		last = (*stack);
		first = (*stack);
		(*stack) = (*stack)->next;

		while(last->next)
			last = last->next;	
					;
		last->next = first;	
		first->next = NULL;
	}
}

void    ra_rb(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void    rev_rotate(t_stack **stack)
{
	t_stack *first;
	t_stack *last;

	first = NULL;
	last = NULL;
		 
	if ((*stack) && (*stack)->next)
	{
		last = (*stack);
		while(last->next->next)
			last = last->next;
		first = last->next;
		last->next = NULL;
		first->next = (*stack);
		(*stack) = first;
	}
}

void    rev_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
}
