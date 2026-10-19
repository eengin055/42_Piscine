#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("valid: %d (expected 1)\n", ft_str_is_alpha("AbCd"));
	printf("invalid: %d (expected 0)\n", ft_str_is_alpha("abc123"));
	printf("empty: %d (expected 1)\n", ft_str_is_alpha(""));
	return (0);
}
