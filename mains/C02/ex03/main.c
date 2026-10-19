#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("valid: %d (expected 1)\n", ft_str_is_numeric("12345"));
	printf("invalid: %d (expected 0)\n", ft_str_is_numeric("12a45"));
	printf("empty: %d (expected 1)\n", ft_str_is_numeric(""));
	return (0);
}
