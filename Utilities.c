/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 15:46:52 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/18 15:46:53 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack     *make_stack(int ac, char **av)
{
	t_stack     *node;
	t_stack     *stack;

	node = NULL;
	stack = NULL;
	while (--ac >= 1)
	{
		if (!(node = (t_stack *)malloc(sizeof(t_stack))))
			return (NULL);
		node->num = ft_atoi(av[ac]);
		node->next = NULL;
		push(&stack, node);
	}
	return (stack);
}

void		del_stack(t_stack *stack)
{
	t_stack		*terminator;

	terminator = NULL;
	while (stack)
	{
		terminator = stack;
		stack = stack->next;
		terminator->next = NULL;
		free(terminator);
	}
}

void		print_stack(t_stack **stack)
{
	t_stack		*node;

	node = *stack;
	while (node)
	{
		ft_putchar('[');
		ft_putnbr(node->num);
		ft_putstr("]->");
		node = node->next;
	}
	ft_putendl("NULL");
}