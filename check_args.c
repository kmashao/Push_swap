/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 08:13:22 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/28 08:13:24 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		has_dup(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[j]) == ft_atoi(av[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		is_max(int ac, char **av)
{
	char	*num_str;

	num_str = NULL;
	while (--ac >= 1)
	{
		num_str = ft_itoa(ft_atoi(av[ac]));
		if (ft_strcmp(num_str, av[ac]))
		{
			ft_strdel(&num_str);
			return (1);
		}
		ft_strdel(&num_str);
	}
	num_str ? ft_strdel(&num_str) : 0;
	return (0);
}

int		sorted(t_stack *stack)
{
	t_stack *node;

	node = stack;
	while (node && node->next)
	{
		if (node->num > node->next->num)
			return (0);
		node = node->next;
	}
	return (1);
}

int		is_num(char *str)
{
	int i;
	
	i = 0;
	if (!ft_strlen(str))
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '\0')
		return (0);
	if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i + 1]))
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		valid(int ac, char **av)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		if (!is_num(av[i]))
			return (0);
		i++;
	}
	if (is_max(ac, av))
		return (0);
	if (has_dup(ac, av))
		return (0);
	return (1);
}
