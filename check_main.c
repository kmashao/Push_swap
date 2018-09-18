/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 16:05:39 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/18 16:06:09 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
    if (ac < 2)
	{
		ft_putchar('\n');
		exit (1);
	}
	if (!valid(ac, av))
	{
		ft_putstr("Error\n");
		exit (1);
	}
    stack_a = make_stack(ac, av);
    print_stack(stack_a);
}
