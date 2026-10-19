/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aergin <aergin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:30:50 by aergin            #+#    #+#             */
/*   Updated: 2023/07/17 16:30:51 by aergin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	ft_border(int x, int y, int col, int row)
{
	if ((row == 1 && col == 1)
		|| (row == y && col == x && row != 1 && col != 1))
		return ('A');
	if ((row == 1 && col == x) || (row == y && col == 1))
		return ('C');
	if (row == 1 || row == y || col == 1 || col == x)
		return ('B');
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
