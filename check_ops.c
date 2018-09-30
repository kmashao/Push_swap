/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:14:14 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:14:31 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     check_ops(char *op)
{
    if (ft_strequ(op, "sa"))
		return (1); 
	if (ft_strequ(op, "sb"))
		return (1);
	if (ft_strequ(op, "ss"))
		return (1);
	if (ft_strequ(op, "ra"))
		return (1);
	if (ft_strequ(op, "rb"))
		return (1);
	if (ft_strequ(op, "rr"))
		return (1);
	if (ft_strequ(op, "rra"))
		return (1);
	if (ft_strequ(op, "rrb"))
		return (1);
	if (ft_strequ(op, "rrr"))
		return (1);
	if (ft_strequ(op, "pa"))
		return (1);
	if (ft_strequ(op, "pb"))
		return (1);
	return (0);	
}
