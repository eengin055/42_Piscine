#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char *words[2] = {"hello", "42"};
	t_stock_str *tab;
	int i;

	tab = ft_strs_to_tab(2, words);
	if (!tab)
		return (1);
	i = 0;
	while (tab[i].str)
	{
		printf("%s / %d / %s\n", tab[i].str, tab[i].size, tab[i].copy);
		free(tab[i++].copy);
	}
	free(tab);
	return (0);
}
