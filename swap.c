/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:15:48 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:15:51 by kmashao          ###   ########.fr       */
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
