#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int n;

	n = 0;
	ft_ft(&n);
	printf("ft_ft: %d (expected 42)\n", n);
	return (0);
}
