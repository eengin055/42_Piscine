/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:45:41 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/30 11:45:43 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_hex(unsigned char c)
{
	char	*hex;
	char	out[3];

	hex = "0123456789abcdef";
	out[0] = '\\';
	out[1] = hex[c / 16];
	out[2] = hex[c % 16];
	write(1, out, 3);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		c = (unsigned char)*str;
		if (c >= 32 && c <= 126)
			write(1, str, 1);
		else
			ft_write_hex(c);
		str++;
	}
}
