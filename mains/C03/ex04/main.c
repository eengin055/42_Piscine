#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char *s;

	s = ft_strstr("hello 42 world", "42");
	printf("found: %s\n", s ? s : "(null)");
	s = ft_strstr("hello 42 world", "xxx");
	printf("missing: %s\n", s ? s : "(null)");
	return (0);
}
