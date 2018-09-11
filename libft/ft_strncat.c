/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:50:55 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/22 08:22:16 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t dest_len;

	i = 0;
	dest_len = ft_strlen(s1);
	while (i < n && s2[i] != '\0')
	{
		s1[dest_len] = s2[i];
		dest_len++;
		i++;
	}
	s1[dest_len] = '\0';
	return (s1);
}
