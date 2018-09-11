/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 17:01:08 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/21 17:28:08 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_lowercase(const char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (ft_islower(s[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
