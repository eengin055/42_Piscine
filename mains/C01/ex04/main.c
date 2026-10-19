#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a;
	int b;

	a = 17;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("ultimate_div_mod: %d %d (expected 3 2)\n", a, b);
	return (0);
}
