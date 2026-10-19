#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int *tab;
	int i;

	tab = ft_range(-2, 3);
	if (!tab)
		return (1);
	i = 0;
	while (i < 5)
		printf("%d ", tab[i++]);
	printf("\n");
	free(tab);
	return (0);
}
