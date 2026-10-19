#include <stdlib.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(t_stock_str *par);

int	main(void)
{
	char *words[2] = {"hello", "42"};
	t_stock_str *tab;
	int i;

	tab = ft_strs_to_tab(2, words);
	if (!tab)
		return (1);
	ft_show_tab(tab);
	i = 0;
	while (tab[i].str)
		free(tab[i++].copy);
	free(tab);
	return (0);
}
