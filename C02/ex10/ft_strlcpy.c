/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:25:40 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/30 11:25:42 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	length;

	length = 0;
	while (src[length])
		length++;
	if (size == 0)
		return (length);
	index = 0;
	while (index + 1 < size && src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = 0;
	return (length);
}
