#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char *));

int	starts_with_a(char *str)
{
	return (str[0] == 'a');
}

int	main(void)
{
	char *words[4] = {"apple", "ball", "ant", "cat"};

	printf("count: %d (expected 2)\n",
		ft_count_if(words, 4, starts_with_a));
	return (0);
}
