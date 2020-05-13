#include "libft.h"

int		ft_skip_spaces(char *str)
{
	int		i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}