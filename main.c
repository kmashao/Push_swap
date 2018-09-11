/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 15:52:49 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/11 15:52:52 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_num(char *str)
{
	int i;
	
	i = -1;
	while (str[++i])
		if(!ft_isspace(str[i]) || !ft_isdigit(str[i]) || str[i] != '-'
		|| str[i] != '+' )
			return (0);
	i = -1;
	while (str[++i])
	{
		if((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]) == 0)
			return (0);
	}
}
int main(int ac, char **av)
{
    if (ac < 2)
		return (0);
}
