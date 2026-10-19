#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("valid: %d (expected 1)\n", ft_str_is_uppercase("HELLO"));
	printf("invalid: %d (expected 0)\n", ft_str_is_uppercase("HellO"));
	printf("empty: %d (expected 1)\n", ft_str_is_uppercase(""));
	return (0);
}
