/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:44:41 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/21 17:19:16 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_alpha(const char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (ft_isalpha(s[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
