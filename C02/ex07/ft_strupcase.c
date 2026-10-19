/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:45:27 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/17 20:45:30 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*current;

	current = str;
	while (*current)
	{
		if (*current >= 'a' && *current <= 'z')
			*current -= 'a' - 'A';
		current++;
	}
	return (str);
}
