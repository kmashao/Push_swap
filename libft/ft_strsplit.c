/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:12:25 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/17 09:33:03 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char *s, char c)
{
	int index;
	int nos;

	index = 0;
	nos = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c)
			index++;
		if (s[index] != c && s[index] != '\0')
			nos++;
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	return (nos);
}

static char	**word(char *s, char c, char **new)
{
	size_t index;
	size_t start;
	size_t ai;

	start = 0;
	index = 0;
	ai = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
			index++;
		if (s[index] != c && s[index] != '\0')
		{
			start = (int)index;
			while (s[index] != c && s[index] != '\0')
				index++;
			new[ai] = ft_strsub((char *)s, start, (index - start));
			ai++;
		}
	}
	new[ai] = NULL;
	return (new);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	nw;
	char	**new;

	if (s != '\0')
	{
		nw = num_words((char *)s, c);
		new = NULL;
		if ((new = (char **)malloc((nw + 1) * sizeof(char *))))
		{
			word((char *)s, c, new);
		}
		return (new);
	}
	return (NULL);
}
