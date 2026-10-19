#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "salut, cEst 42mots.";

	printf("result: %s\n", ft_strcapitalize(str));
	return (0);
}
