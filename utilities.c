/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:12:52 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:12:52 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void		del_stack(t_stack **stack)
{
	t_stack		*node;

	node = NULL;
	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		node->next = NULL;
		free(node);
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

int		sorted(t_stack *stack)
{
	t_stack *node;
	node = NULL;

	if (stack){
		node = stack;
		while (node && node->next)
		{
			if (node->num > node->next->num)
				return (0);
			node = node->next;
		}
	}
	return (1);
}

int		empty(char *str)
{
	int i;
	
	i = 0;
	if (!ft_strlen(str))
		return (1);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	return(0);
}
