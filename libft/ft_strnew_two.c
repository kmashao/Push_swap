/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_2D.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:02:16 by kmashao           #+#    #+#             */
/*   Updated: 2018/07/16 10:02:29 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnew_two(size_t y_axis, size_t x_axis)
{
/*	size_t i;
	char	**arr;

	i = 0;
	arr = NULL;
	arr = (char **)malloc(sizeof(char *) * y_axis + 1);
	while (i < y_axis)
	{
		arr[i] = (char *)malloc(sizeof(char) * x_axis);
		i++;
	}
	return(arr);
}*/

	char	**tab;
	char	*tableau2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y_axis);
	tableau2 = (char *)malloc(sizeof(char) * x_axis * y_axis);
	while (i < y_axis)
	{
		tab[i] = &tableau2[i * x_axis];
		i++;
	}
	return (tab);
}