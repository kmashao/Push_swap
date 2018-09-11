/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:41:37 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/16 18:01:00 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	size_t	i;
	char	*ns;

	i = 0;
	if (s && f)
	{
		if (!(ns = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (i < ft_strlen(s))
		{
			ns[i] = f(s[i]);
			i++;
		}
		return (ns);
	}
	return (NULL);
}
