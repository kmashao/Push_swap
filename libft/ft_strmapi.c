/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 17:46:29 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/16 18:01:37 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*fresh_s;
	int		i;

	i = 0;
	if (s && f)
	{
		if (!(fresh_s = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (s[i])
		{
			fresh_s[i] = f(i, s[i]);
			i++;
		}
		return (fresh_s);
	}
	return (NULL);
}
