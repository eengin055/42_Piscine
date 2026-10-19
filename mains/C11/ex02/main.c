#include <stdio.h>

int	ft_any(char **tab, int (*f)(char *));

int	starts_with_a(char *str)
{
	return (str[0] == 'a');
}

int	main(void)
{
	char *yes[3] = {"bob", "alice", 0};
	char *no[2] = {"bob", 0};

	printf("any yes: %d\n", ft_any(yes, starts_with_a));
	printf("any no: %d\n", ft_any(no, starts_with_a));
	return (0);
}
