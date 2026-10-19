#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[5] = {9, 1, 5, -2, 3};
	int i;

	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
