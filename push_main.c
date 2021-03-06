/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:14:54 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:14:58 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
//	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (!check_args(ac, av))
	{
		ft_putendl("Error");
		return (0);
	}
	else
		stack_a = make_stack(ac, av);

	sort_all(&stack_a, &stack_b);
	del_stack(&stack_a);
	del_stack(&stack_b);
	return (0);
}
