#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	printf("length: %d (expected 3)\n", ft_strlen("42!"));
	printf("empty: %d (expected 0)\n", ft_strlen(""));
	return (0);
}
