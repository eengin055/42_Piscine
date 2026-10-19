/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:14:01 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/26 09:14:14 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	*range = 0;
	if (min >= max)
		return (0);
	length = max - min;
	*range = malloc(sizeof(int) * length);
	if (!*range)
		return (-1);
	i = 0;
	while (i < length)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (length);
}
