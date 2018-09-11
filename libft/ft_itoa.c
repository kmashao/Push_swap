/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:16:03 by kmashao           #+#    #+#             */
/*   Updated: 2018/06/17 10:08:32 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	len(long num, int *sign)
{
	int	i;

	i = 0;
	if (num == 0)
		i++;
	if (num < 0)
	{
		num *= -1;
		*sign = 1;
		i++;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		sign;
	long	k;
	int		i;

	sign = 0;
	k = (long)n;
	i = len(k, &sign);
	if (k < 0)
		k *= -1;
	str = NULL;
	if ((str = ft_strnew(i)))
	{
		if (k == 0)
			str[0] = '0';
		while (--i > -1)
		{
			str[i] = (k % 10) + '0';
			k /= 10;
		}
		if (sign == 1)
			str[0] = '-';
	}
	return (str);
}
