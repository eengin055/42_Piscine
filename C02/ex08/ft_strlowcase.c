/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:45:43 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/17 20:45:46 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*current;

	current = str;
	while (*current)
	{
		if (*current >= 'A' && *current <= 'Z')
			*current += 'a' - 'A';
		current++;
	}
	return (str);
}
