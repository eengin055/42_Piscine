#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char dest[32];

	printf("strcpy: %s\n", ft_strcpy(dest, "Hello, 42!"));
	printf("empty: [%s]\n", ft_strcpy(dest, ""));
	return (0);
}
