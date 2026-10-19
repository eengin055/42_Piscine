#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	square(int n)
{
	return (n * n);
}

int	main(void)
{
	int tab[3] = {2, 3, 4};
	int *result;
	int i;

	result = ft_map(tab, 3, square);
	if (!result)
		return (1);
	i = 0;
	while (i < 3)
		printf("%d ", result[i++]);
	printf("\n");
	free(result);
	return (0);
}
