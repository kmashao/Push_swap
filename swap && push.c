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

void	swap(t_stack **stack)
{
	t_stack	*swap;

	if (*stack && (*stack)->next)
	{
		swap = *stack;
		*stack = (*stack)->next;
		swap->next = (*stack)->next;
		(*stack)->next = swap;
	}
}

void	sa_sb(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *swap;

	if (*stack_b)
	{
		swap = (*stack_a);
		(*stack_a) = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		(*stack_a)->next = swap; 
	}
}

int		do_op(char *op, t_stack *stack_a, t_stack stack_b)
{
	if (!strcmp(op, "sa"))
		swap(&stack_a);
	else if (!strcmp(op, "sb"))
		swap(&stack_b);
	else if (!strcmp(op, "ss"))
		sa_sb(&stack_a, &stack_b);
	else if (!strcmp(op, "ra"))
		rotate(&stack_a);
	else if (!strcmp(op, "rb"))
		rotate(&stack_b);
	else if (!strcmp(op, "rr"))
		ra_rb(&stack_a, &stack_b);
	else if (!strcmp(op, "rra"))
		rev_rotate(&stack_a);
	else if (!strcmp(op, "rrb"))
		rev_rotate(&stack_b);
	else if (!strcmp(op, "rrr")
		rev_rotate_ab(&stack_a, &stack_b);
	else
	{
		ft_putsr_fd("error\n", 3);
		exit(1);
	}

	
	
}