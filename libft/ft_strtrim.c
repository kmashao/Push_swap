/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:44:21 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/07 11:11:06 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	space(char s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*fresh_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	fresh_s = NULL;
	if (s)
	{
		j = ft_strlen(s);
		while (space(s[i]))
			i++;
		while (space(s[j - 1]))
			j--;
		if (s[i] == '\0' || j == 0)
			return (fresh_s = "");
	}
	return (fresh_s = ft_strsub(s, i, j - i));
}
