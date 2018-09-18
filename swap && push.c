/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap && push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:40:39 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 14:40:43 by kmashao          ###   ########.fr       */
/*                        ck                                                    */
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

t_stack		*pop(t_stack **stack)
{
	t_stack *node;

	node = NULL;
	if (stack && (*stack))
	{
		node = (*stack);
		(*stack) = (*stack)->next;
		node->next = NULL;
	}
	return (node);
}

void	push(t_stack **stack, t_stack *node)
{
	if (stack && node)
	{
		node->next = (*stack);
		(*stack) = node;
	}
}

void		do_op(char *op, t_stack *stack_a, t_stack *stack_b)
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
	else if (!strcmp(op, "rrr"))
		rev_rotate_ab(&stack_a, &stack_b);
	else
	{
		ft_putstr_fd("error\n", 2);
		exit(1);
	}	
}