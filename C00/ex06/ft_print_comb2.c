/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:45:01 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/12 15:18:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_pair(int first, int second)
{
	char	out[5];

	out[0] = '0' + first / 10;
	out[1] = '0' + first % 10;
	out[2] = ' ';
	out[3] = '0' + second / 10;
	out[4] = '0' + second % 10;
	write(1, out, 5);
	if (first != 98 || second != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first < 99)
	{
		second = first + 1;
		while (second < 100)
			ft_print_pair(first, second++);
		first++;
	}
}
