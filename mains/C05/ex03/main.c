#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("2^5: %d (expected 32)\n", ft_recursive_power(2, 5));
	printf("3^0: %d (expected 1)\n", ft_recursive_power(3, 0));
	printf("2^-1: %d (expected 0)\n", ft_recursive_power(2, -1));
	return (0);
}
