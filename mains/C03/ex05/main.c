#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dst[16] = "Hello";
	unsigned int n;

	n = ft_strlcat(dst, " 42 world", sizeof(dst));
	printf("strlcat: [%s], total=%u\n", dst, n);
	n = ft_strlcat(dst, "!", 4);
	printf("small capacity: [%s], total=%u\n", dst, n);
	return (0);
}
