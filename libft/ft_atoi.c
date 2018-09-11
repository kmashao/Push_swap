/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <kmashao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 10:39:00 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/26 17:02:01 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	maxv(int r, int h)
{
	if (r < 0 && h > 0)
		return (-1);
	else if (r > 2147483647 && h < 0)
		return (0);
	return (r * h);
}

int			ft_atoi(const char *str)
{
	int s;
	int res;

	s = 1;
	res = 0;
	while (ft_isspace(*str) == 1)
		str++;
	if (*str == '\0')
		return (0);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (maxv(res, s));
}
