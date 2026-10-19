#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("valid: %d (expected 1)\n", ft_str_is_printable("hello 42!"));
	printf("invalid: %d (expected 0)\n", ft_str_is_printable("hey\n"));
	printf("empty: %d (expected 1)\n", ft_str_is_printable(""));
	return (0);
}
