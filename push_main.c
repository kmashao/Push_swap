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
    char    *str;

    str = NULL;
    if (ac < 2)
        exit(1);
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
		exit (1);
	}









}
