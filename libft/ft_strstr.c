/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:27:53 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/22 09:13:43 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	comp(char *s1, char *s2, int l)
{
	int k;

	k = 0;
	while (s1[l] == s2[k] && s1[l] && s2[k])
	{
		l++;
		k++;
	}
	if (s2[k] == '\0')
		return (1);
	return (0);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	char	*res;

	i = 0;
	res = NULL;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			if (comp((char *)haystack, (char *)needle, i) == 1)
			{
				res = (char *)&haystack[i];
				break ;
			}
		}
		i++;
	}
	return (res);
}
