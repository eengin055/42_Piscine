#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dst[32] = "Hello";

	printf("strncat: %s\n", ft_strncat(dst, " world", 3));
	return (0);
}
