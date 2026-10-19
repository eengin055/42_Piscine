#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *s;

	s = ft_strdup("Hello, 42!");
	if (!s)
		return (1);
	printf("strdup: %s\n", s);
	free(s);
	return (0);
}
