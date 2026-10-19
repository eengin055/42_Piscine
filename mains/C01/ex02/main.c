#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 12;
	b = 34;
	ft_swap(&a, &b);
	printf("ft_swap: %d %d (expected 34 12)\n", a, b);
	return (0);
}
