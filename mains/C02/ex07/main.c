#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[] = "HeLLo, 42!";

	printf("result: %s\n", ft_strupcase(str));
	return (0);
}
