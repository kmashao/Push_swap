/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:31:44 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/21 15:31:45 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     small(t_stack *stack)
{
	t_stack *node;
	int		smallest;

	node = stack;
	smallest = node->num;
	while (node)
	{
		if (node->num < smallest)
			smallest = node->num;
		node = node->next;
	}
	return (smallest);
}
