/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehkekli <mehkekli@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:10:37 by mehkekli          #+#    #+#             */
/*   Updated: 2023/07/16 19:10:38 by mehkekli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	value;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		value = tab[left];
		tab[left++] = tab[right];
		tab[right--] = value;
	}
}
