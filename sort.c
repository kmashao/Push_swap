/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:15:30 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:15:33 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int empty_stack(t_stack **stack)
{
	if (!(*stack))
		return (1);
	return (0);
}

int		check_desc(t_stack **stack)
{
	t_stack	*current;
	t_stack	*previous;

	current = NULL;
	previous = NULL;
	if (!(*stack) || !(*stack)->next)
		return (0);
	previous = (*stack);
	current = (*stack)->next;
	while (current)
	{
		if (current->num > previous->num)
			return (0);
		current = current->next;
		previous = previous->next;
	}
	return (1);

}

void	sort_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *first;
	t_stack	*second;
	t_stack	*third;
	if (!*stack_a || !*stack_b)
		return ;
	first = (*stack_b);
	second = (*stack_b)->next;
	third = (*stack_b)->next;
	while(third && third->next)
		third = third->next;
	if (second && third)
		while(!check_desc(stack_b))
		{
			if (first->num < third->num)
				do_op("rrb",stack_a, stack_b);
			else if (first->num < second->num && second->num > third->num)
				do_op("sb", stack_a, stack_b);
		}
}

void	sort_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack *second;
	t_stack	*third;

	first = NULL;
	second = NULL;
	third = NULL;
	while (!sorted((*stack_a)))
	{
		first = (*stack_a);
		second = (*stack_a)->next;
		third = (*stack_a)->next;
		while (third && third->next)
			third = third->next;
		if (first->num < second->num && first->num > third->num)
			do_op("rra", stack_a, stack_b);
		else if (first->num > second->num)
			do_op("sa", stack_a, stack_b);
		else if (first->num > third->num)
			do_op("ra", stack_a, stack_b);
		else if (third->num > first->num || second->num > first->num)
			do_op("pb", stack_a, stack_b);
		sort_b(stack_a, stack_b);
	}
}

void	sort_all(t_stack **stack_a, t_stack **stack_b)
{
	sort_a(stack_a, stack_b);
	if(sorted(*stack_a) && !empty_stack(stack_b))
	{
		while(!empty_stack(stack_b))
		{
			do_op("pa", stack_a, stack_b);
			sort_a(stack_a, stack_b);
		}
	}
}
