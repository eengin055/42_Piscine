#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	compare(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (1);
	return (0);
}

int	main(void)
{
	int sorted[4] = {1, 2, 2, 4};
	int mixed[4] = {1, 4, 2, 3};

	printf("sorted: %d (expected 1)\n",
		ft_is_sort(sorted, 4, compare));
	printf("mixed: %d (expected 0)\n",
		ft_is_sort(mixed, 4, compare));
	return (0);
}
