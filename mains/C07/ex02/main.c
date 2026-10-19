#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int *tab;
	int len;
	int i;

	len = ft_ultimate_range(&tab, -2, 3);
	printf("count: %d\n", len);
	i = 0;
	while (i < len)
		printf("%d ", tab[i++]);
	printf("\n");
	free(tab);
	return (0);
}
