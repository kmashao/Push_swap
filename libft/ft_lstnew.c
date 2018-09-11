/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:49:03 by kmashao           #+#    #+#             */
/*   Updated: 2018/07/16 14:49:23 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list      *ft_lstnew(void const *content, size_t content_size)
{
	t_list n_list;
	n_list = (((t_list *)ft_memalloc(sizeof(t_list));
	n_list->content = content;
	n_list->content_size = content_size;
    if (!n_list->content)
	{
		n_list->content = NULL;
		n_list->content_size = 0;
	}
	n_list;
return (n_list)
}
