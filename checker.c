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

int		has_dup(char **av)
{
	int i;
	int j;

	i = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[j]) == ft_atoi(av[i]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		exceeds_max(char *av)
{

	char	*num_str;

	num_str = ft_itoa(ft_atoi(av));

		if (ft_strcmp(num_str, av) == 0)
		{
			ft_strdel(&num_str);
			return (0);
		}
		ft_strdel(&num_str);
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
	if (ft_strcmp(str, "+0") == 0 || ft_strcmp(str, "-0") == 0)
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
