/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:35:21 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/24 10:35:21 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	candidate;

	if (nb <= 0)
		return (0);
	candidate = 1;
	while (candidate <= nb / candidate)
	{
		if (candidate * candidate == nb)
			return (candidate);
		candidate++;
	}
	return (0);
}
