/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 13:04:17 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/16 13:10:38 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*byte_s1;
	unsigned char	*byte_s2;

	i = 0;
	byte_s1 = (unsigned char *)s1;
	byte_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (byte_s1[i] > byte_s2[i] || byte_s1[i] < byte_s2[i])
			return (byte_s1[i] - byte_s2[i]);
		i++;
		if (i == n)
			break ;
	}
	return (0);
}
