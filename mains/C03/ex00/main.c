#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("equal: %d\n", ft_strcmp("42", "42"));
	printf("smaller: %d\n", ft_strcmp("abc", "abd"));
	printf("greater: %d\n", ft_strcmp("abd", "abc"));
	return (0);
}
