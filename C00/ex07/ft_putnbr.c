/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 09:16:05 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/24 09:16:21 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_digits(long number)
{
	char	digit;

	if (number >= 10)
		ft_write_digits(number / 10);
	digit = '0' + number % 10;
	write(1, &digit, 1);
}

void	ft_putnbr(int nb)
{
	long	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	ft_write_digits(number);
}
