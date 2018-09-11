/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:01:42 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/22 08:20:37 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t dest_len;

	i = 0;
	dest_len = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[dest_len] = s2[i];
		dest_len++;
		i++;
	}
	s1[dest_len] = '\0';
	return (s1);
}
