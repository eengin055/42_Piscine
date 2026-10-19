/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:39:57 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:15 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	count;
	int	i;

	if (min >= max)
		return (0);
	count = max - min;
	result = malloc(sizeof(int) * count);
	if (!result)
		return (0);
	i = 0;
	while (i < count)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
