/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 17:13:12 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/16 16:01:59 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*cs;
	char	*cd;

	i = 0;
	cs = (char *)src;
	cd = (char *)dst;
	if (dst > src)
	{
		while (len)
		{
			cd[len - 1] = cs[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len && cs != '\0')
		{
			cd[i] = cs[i];
			i++;
		}
	}
	return (dst);
}
