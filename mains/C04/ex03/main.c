#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("atoi: %d (expected -42)\n", ft_atoi("  -+42"));
	printf("atoi: %d (expected 123)\n", ft_atoi("  +123xx"));
	printf("atoi: %d (expected 0)\n", ft_atoi("foo"));
	return (0);
}
