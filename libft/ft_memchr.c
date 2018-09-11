/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 11:16:11 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/17 10:10:05 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	byte_c;
	unsigned char	*byte_s;
	unsigned char	*res;

	i = 0;
	byte_c = (unsigned char)c;
	byte_s = (unsigned char *)s;
	res = NULL;
	while (i < n)
	{
		if (byte_s[i] == byte_c)
		{
			res = &byte_s[i];
			return (res);
		}
		i++;
	}
	return (NULL);
}
