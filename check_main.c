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
	print_stack(&stack_a);
	while (get_next_line(0,&op) > 0)
	{
		if (check_ops(op) == 0)
		{
			ft_putendl("Error");
			exit (1);
		}
		
			ft_putendl("before");
		print_stack(&stack_a);
		do_op(op, &stack_a, &stack_b);

			ft_putendl("after");
		print_stack(&stack_a);
	}
	(sorted(stack_a) && !stack_b) ? ft_putendl("OK") : ft_putendl("KO");
	
}

int main(int ac, char **av)
{
	char		*str;

	str = NULL;
	if (ac < 2)
		exit (1);
	if (ac == 2)
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
		exit (1);
	}
	check_loop(ac, av);
	return (0);
}
