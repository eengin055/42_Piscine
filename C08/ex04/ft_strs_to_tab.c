/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:22:56 by mehkekli          #+#    #+#             */
/*   Updated: 2023/08/01 19:22:59 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	copy = malloc(ft_strlen(src) + 1);
	if (!copy)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}

void	ft_free_stock(t_stock_str *result, int count)
{
	while (count > 0)
	{
		count--;
		free(result[count].copy);
	}
	free(result);
}

int	ft_fill_stock(t_stock_str *item, char *str)
{
	item->size = ft_strlen(str);
	item->str = str;
	item->copy = ft_strdup(str);
	return (item->copy != 0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int				i;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < ac)
	{
		if (!ft_fill_stock(&result[i], av[i]))
		{
			ft_free_stock(result, i);
			return (0);
		}
		i++;
	}
	result[i].str = 0;
	result[i].copy = 0;
	result[i].size = 0;
	return (result);
}
