/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmashao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 08:58:41 by kmashao           #+#    #+#             */
/*   Updated: 2018/07/14 13:18:56 by kmashao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int		readline(const int fd, char **line, int ret)
{
	char *buff;
	char *hold;
	char *temp;

	temp = NULL;
	buff = ft_strnew(BUFF_SIZE);
	if ((read(fd, temp, 0) < 0))
		return (-1);
	hold = NULL;
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		hold = ft_strjoin(*line, buff);
		free((*line));
		(*line) = hold;
		if (ft_strchr(buff, '\n'))
			break ;
		ft_strclr(buff);
	}
	free(buff);
	return (ret);
}

int		get_next_line(const int fd, char **line)
{
	char		*hold;
	static char	*res[255];
	int			ret;

	ret = 1;
	hold = NULL;
	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (res[fd])
	{
		(*line) = res[fd];
		res[fd] = ft_strchr((*line), '\n');
	}
	else
		(*line) = ft_strnew(0);
	if (!res[fd])
		ret = readline(fd, line, ret);
	if ((hold = ft_strchr((*line), '\n')))
	{
		res[fd] = ft_strdup(hold + 1);
		ft_strclr(hold);
	}
	if (ret > 0 || ft_strlen((*line)) > 0)
		ret = 1;
	return (ret);
}*/
t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = NULL;
	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		if (content == NULL || content_size == 0)
		{
			new->content = 0;
			new->content_size = 0;
		}
		else if ((new->content = (void *)malloc(content_size)))
		{
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		new->next = NULL;
	}
	return (new);
}

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (!(*alst))
		(*alst) = new;
	else
		new->next = (*alst);
	*alst = new;
}

static	t_list	*search(t_list **str, size_t fd)
{
	t_list *run;

	run = (*str);
	while (run != NULL && run->content_size != fd)
	{
		run = run->next;
	}
	if (run == NULL)
	{
		ft_lstadd(str, ft_lstnew(0, 0));
		(*str)->content_size = fd;
		return (*str);
	}
	return (run);
}

static	int		join(t_list *hold, const int fd, char **line)
{
	char	*temp;
	char	*buf;
	int		size;

	size = 1;
	temp = NULL;
	if (hold->content == NULL)
	{
		buf = ft_strnew(BUFF_SIZE);
		size = read(fd, buf, BUFF_SIZE);
		if ((*line) == NULL)
			(*line) = ft_strdup(buf);
		else
		{
			temp = ft_strjoin((*line), buf);
			free((*line));
			(*line) = temp;
		}
		free(buf);
	}
	else
	{
		(*line) = hold->content;
	}
	return (size);
}
 
int				get_next_line(const int fd, char **line)
{
	static	t_list	*save;
	t_list			*hold;
	int				size;
	int				i;

	i = 1;
	size = 1;
	if (fd < 0 || !line || BUFF_SIZE < 0)
		return (-1);
	(*line) = NULL;
	hold = search(&save, (size_t)fd);
	while (i == 1 && size > 0) 
	{
		size = join(hold, fd, line);
		if ((hold->content = ft_strchr(*line, '\n')))
		{
			hold->content = ft_strdup(hold->content + 1);
			ft_strclr(ft_strchr(*line, '\n'));
			i = 0;
		}
	}
	if (size > 1 || ft_strlen(*line))
		size = 1;
	return (size);
}