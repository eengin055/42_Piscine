#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("valid: %d (expected 1)\n", ft_str_is_lowercase("hello"));
	printf("invalid: %d (expected 0)\n", ft_str_is_lowercase("Hello"));
	printf("empty: %d (expected 1)\n", ft_str_is_lowercase(""));
	return (0);
}
