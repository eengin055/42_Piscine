/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergin <aergin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:30:06 by aergin            #+#    #+#             */
/*   Updated: 2023/07/17 16:30:08 by aergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	ft_border(int x, int y, int col, int row)
{
	if ((col == 1 || col == x) && (row == 1 || row == y))
		return ('o');
	if (row == 1 || row == y)
		return ('-');
	if (col == 1 || col == x)
		return ('|');
	return (' ');
}

void	ft_draw_row(int x, int y, int row)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		ft_putchar(ft_border(x, y, col, row));
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error! Invalid input.\n", 22);
		return ;
	}
	row = 1;
	while (row <= y)
	{
		ft_draw_row(x, y, row);
		row++;
	}
}
