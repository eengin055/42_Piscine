/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:09 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:12 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 1;
	while (i < size)
	{
		length += ft_length(strs[i]);
		i++;
	}
	if (size > 1)
		length += (size - 1) * ft_length(sep);
	return (length);
}

char	*ft_append(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*end;
	int		i;

	result = malloc(ft_total_size(size, strs, sep));
	if (!result)
		return (0);
	end = result;
	i = 0;
	while (i < size)
	{
		end = ft_append(end, strs[i]);
		if (i + 1 < size)
			end = ft_append(end, sep);
		i++;
	}
	*end = 0;
	return (result);
}
