#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int div;
	int mod;

	ft_div_mod(17, 5, &div, &mod);
	printf("ft_div_mod: %d %d (expected 3 2)\n", div, mod);
	return (0);
}
