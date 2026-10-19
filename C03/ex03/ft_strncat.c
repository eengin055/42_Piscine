/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:39:28 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/22 15:39:41 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*end;

	end = dest;
	while (*end)
		end++;
	i = 0;
	while (i < nb && src[i])
	{
		end[i] = src[i];
		i++;
	}
	end[i] = 0;
	return (dest);
}
