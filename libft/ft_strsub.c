/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 15:43:36 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/16 18:09:48 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_s;

	i = 0;
	sub_s = NULL;
	if (s)
	{
		if (!(sub_s = ft_strnew(len)))
			return (sub_s);
		while (i < len)
		{
			sub_s[i] = s[start];
			i++;
			start++;
		}
	}
	return (sub_s);
}
