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

void    rotate(t_list **stack_a)
{
    t_list *swap;
    t_list *swap2;

    if ((*stack) && (*stack)->next)
    {
        swap_i = (*stack);
        swap = (*stack);
        (*stack) = (*stack)->next;
        while(swap2->next)
            swap2 = swap2->next;
        swap->next = NULL;
        swap2->next = swap;
    }
}

void    ra_rb(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
}

void    rev_rotate(t_list **stack)
{
    t_list *swap;
    t_list *swap2;
         
    if ((*stack) && (*stack)->next)
    {
		swap = (*stack);
		swap2 = (*stack);
        while(swap2->next->next)
            swap2 = swap2->next;
        swap = swap2->next;
		swap2->next = NULL;
		swap->next = (*stack);
		(*stack) = swap;
    }
}
