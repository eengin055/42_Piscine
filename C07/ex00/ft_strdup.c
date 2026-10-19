/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:37:36 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:17 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		length;
	int		i;

	length = 0;
	while (src[length])
		length++;
	copy = malloc(length + 1);
	if (!copy)
		return (0);
	i = 0;
	while (i <= length)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
