#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[16];

	ft_strncpy(dest, "42", 5);
	printf("strncpy: [%s]\n", dest);
	ft_strncpy(dest, "hello", 3);
	dest[3] = '\0';
	printf("first 3: [%s]\n", dest);
	return (0);
}
