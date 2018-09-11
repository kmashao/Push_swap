/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:26:42 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/15 16:55:46 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*cd;
	unsigned char	*cs;
	unsigned char	*res;

	i = 0;
	cc = (unsigned char)c;
	cs = (unsigned char *)src;
	cd = (unsigned char *)dst;
	res = NULL;
	while (i < n)
	{
		cd[i] = cs[i];
		if (cs[i] == cc)
		{
			res = &cd[i + 1];
			return (res);
		}
		i++;
	}
	if (i == n)
		return (res);
	return (res);
}
