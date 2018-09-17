/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:52:49 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 15:52:52 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		dup(t_stack *stack_a, int *num)
{
	t_stack *node;
	
	node = stack_a;
	while (node)
	{
		if (node->num == *num)
			return (1);
		node = node->next;
	}
	return (0);
}

int		valid(t_stack *stack_a, long int num)
{
	if (num > 2147483647 || num < -2147483648 || dup(stack_a, &num))
		return (1);
	return (0);
}

int		sorted(t_stack *stack)
{
	t_stack *node1;
	t_stack *node2;

	node1 = stack;
	while (node1)
	{
		node2 = node1->next;
		while (node2)
		{
			if (node1->num < node2->num)
			{
				ft_putstr_fd("KO\n", 3)
				return (0);
			}
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	return (1);
}

int		is_num(char *str)
{
	int i;
	
	i = -1;
	while (str[++i])
		if (!ft_isspace(str[i]) || !ft_isdigit(str[i]) || str[i] != '-'
		|| str[i] != '+' )
			return (0);
	i = -1;
	while (str[++i])
	{
		if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
			return (0);
		else if ((str[i] == ' ' && (!ft_isdigit(str[i + 1]) || !ft_isdigit(str[i - 1]))))
			return (0);
	}
	i = -1;

	return (0);
}

int main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
    if (ac < 2)
	{
		ft_putchar('\n');
		return (0);
}
