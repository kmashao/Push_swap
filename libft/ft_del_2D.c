/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_2D.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 15:28:36 by kmashao           #+#    #+#             */
/*   Updated: 2018/09/30 15:28:43 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void       ft_del_2D(char **arr)
// {
//     int     i;

//     i = 0;
//     if (arr && *arr)
//     {
//         while (arr[i])
//         {
//             free(arr[i]);
//             arr[i] = NULL;
//             i++;
//         }
//         arr = NULL;
//     }
// }

void	ft_del_2D(char **strings)
{
	int		i;

	i = 0;
	if (!strings || !*strings)
		return ;
	while (strings[i])
	{
		ft_strdel(&strings[i]);
		i++;
	}
	free(strings);
	strings = NULL;
}
