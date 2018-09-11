/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 15:10:04 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/15 16:49:36 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;

	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (dstsize + ft_strlen(src));
	if (dst_len < dstsize)
		ft_strncat(dst, src, dstsize - dst_len - 1);
	return (dst_len + ft_strlen(src));
}
