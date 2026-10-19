#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("first 2 equal: %d\n", ft_strncmp("abc", "abd", 2));
	printf("first 3 differ: %d\n", ft_strncmp("abc", "abd", 3));
	printf("zero length: %d\n", ft_strncmp("a", "b", 0));
	return (0);
}
