#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dst[32];

	dst[0] = '\0';
	ft_strcat(dst, "Hello");
	printf("strcat: %s\n", ft_strcat(dst, ", 42!"));
	return (0);
}
