/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:13:48 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:13:53 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void	check_loop(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		*op;

	stack_a = NULL;
	stack_b = NULL;
	op = NULL;
	stack_a = make_stack(ac, av);
	while (get_next_line(0,&op) > 0)
	{
		if (check_ops(op) == 0)
		{
			ft_putendl("Error");
			ft_strdel(&op);
			exit (1);
		}
		do_op_2(op, &stack_a, &stack_b);
		ft_strdel(&op);
	}
	(sorted(stack_a) && !stack_b) ? ft_putendl("OK") : ft_putendl("KO");
	
}

int		main(int ac, char **av)
{
	char		*str;

	str = NULL;
	if (ac < 2)
		exit (1);
	if (ac == 2 && !empty(av[1]))
	{
		str = ft_strjoin("checker ", av[1]);
		av = ft_strsplit(str, ' ');
		ft_strdel(&str);
		while (av[ac])
			ac++;
	}
	if (!valid(ac, av))
	{
		ft_putstr("Error\n");
		ft_del_2D(av);
		exit (1);
	}
	check_loop(ac, av);
	ft_del_2D(av);
	exit (1);
}
