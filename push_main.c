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
	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit(1);
	if (ac == 2 && !empty(av[1]))
	{
		str = ft_strjoin("Push ", av[1]);
		av = ft_strsplit(str, ' ');
		ft_strdel(&str);
		while (av[ac])
			ac++;
	}
	if (!valid(ac, av))
	{
		ft_putendl("Error");
		ft_del_2D(av);
		exit (1);
	}
	stack_a = make_stack(ac, av);
	if (!stack_a)
		ft_putendl("NO stack a");
	sort_all(&stack_a, &stack_b);
//	ft_del_2D(av);
	del_stack(&stack_a);
	del_stack(&stack_b);
	exit (0);
}
