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

int		check_args(int ac,char **av){

	char *str;
	char **values;

	str = NULL;
	values = NULL;
	if(ac == 2 && ft_strlen(av[1]) && !ft_skip_spaces(av[1]))
	{
		if(!(str = ft_strjoin("args ", av[1])))
			return (0);
		values = ft_strsplit(str, ' ');
		if(!(valid(values)))
		{
			ft_del_2D(values);
			ft_strdel(&str);
			return (0);
		}
		else
		{
			ft_del_2D(values);
			ft_strdel(&str);
			return(1);
		}	
	}
	else
	{
		return (valid(av) ? 1 : 0);
	}
	
}

char		**split_args(int ac, char **args)
{
	char	**values;
	char	*str;

	values = NULL;
	str = NULL;
	if (ac == 2)
	{
		str = ft_strjoin("args ", args[1]);
		values = ft_strsplit(str, ' ');
		ft_strdel(&str);
	}
	else
		values = args;
	return (values);
}

int		valid(char **av)
{
	int		index;

	index = 1;
	while(av[index])
		index++;
	while (--index >= 1)
	{
		if (!is_num(av[index]) || exceeds_max(av[index]))
			return (0);
	}
	if (has_dup(av))
		return (0);
	return (1);
}
