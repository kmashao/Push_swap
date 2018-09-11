/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 10:10:50 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/16 18:13:52 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		dest_len;
	char	*fresh_s;

	if (s1 && s2)
	{
		dest_len = ft_strlen(s1) + ft_strlen(s2);
		if (!(fresh_s = ft_strnew(dest_len)))
			return (NULL);
		ft_strcat(fresh_s, s1);
		ft_strcat(fresh_s, s2);
		return (fresh_s);
	}
	return (NULL);
}
