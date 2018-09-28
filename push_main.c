/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:17:33 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/20 16:17:35 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
    if (ac < 2)
        exit(1);
	if (ac == 2 && empty(av[1]))
	{
		ft_putendl("Error\n");
		exit (1);
	}
	if (!valid(ac, av))
	{
		ft_putstr("Error\n");
		exit (1);
	}
	stack_a = make_stack(ac, av);
	exit (1);
}
