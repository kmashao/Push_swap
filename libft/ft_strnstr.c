/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 13:49:01 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/22 09:19:31 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(char *s1, char *s2, size_t l, size_t k)
{
	int m;

	m = 0;
	while (s1[l] == s2[m] && s1[l] != '\0' && s2[m] != '\0' && l != k)
	{
		l++;
		m++;
	}
	if (s2[m] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		if (comp((char *)haystack, (char *)needle, i, len) == 1)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
