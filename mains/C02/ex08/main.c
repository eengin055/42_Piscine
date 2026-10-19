#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "HeLLo, 42!";

	printf("result: %s\n", ft_strlowcase(str));
	return (0);
}
