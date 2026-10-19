/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:39:22 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/22 15:39:42 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*end;

	end = dest;
	while (*end)
		end++;
	while (*src)
		*end++ = *src++;
	*end = 0;
	return (dest);
}
