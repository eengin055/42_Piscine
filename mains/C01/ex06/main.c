#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("empty: %d (expected 0)\n", ft_strlen(""));
	printf("hello: %d (expected 5)\n", ft_strlen("hello"));
	return (0);
}
