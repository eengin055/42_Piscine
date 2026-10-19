#include <stdio.h>

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size);

int	main(void)
{
	char dst[8];
	unsigned int n;

	n = ft_strlcpy(dst, "Hello 42", sizeof(dst));
	printf("strlcpy: [%s], len=%u (expected 8)\n", dst, n);
	n = ft_strlcpy(dst, "", sizeof(dst));
	printf("empty: [%s], len=%u (expected 0)\n", dst, n);
	return (0);
}
