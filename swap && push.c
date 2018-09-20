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

void	do_op(char *op, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strequ(op, "sa"))
		swap(stack_a);
	else if (ft_strequ(op, "sb"))
		swap(stack_b);
	else if (ft_strequ(op, "ss"))
		sa_sb(stack_a, stack_b);
	else if (ft_strequ(op, "ra"))
		rotate(stack_a);
	else if (ft_strequ(op, "rb"))
		rotate(stack_b);
	else if (ft_strequ(op, "rr"))
		ra_rb(stack_a, stack_b);
	else if (ft_strequ(op, "rra"))
		rev_rotate(stack_a);
	else if (ft_strequ(op, "rrb"))
		rev_rotate(stack_b);
	else if (ft_strequ(op, "rrr"))
		rev_rotate_ab(stack_a, stack_b);
	else if (ft_strequ(op, "pa"))
		push(stack_a, pop(stack_b));
	else if (ft_strequ(op, "pb"))
		push(stack_b, pop(stack_a));
	else
		exit(1);
}