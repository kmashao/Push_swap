/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:41:24 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 14:41:27 by kmashao          ###   ########.fr       */
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
	print_stack(stack);
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