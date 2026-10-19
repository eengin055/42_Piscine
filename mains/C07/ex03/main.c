#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *words[3];
	char *s;

	words[0] = "C";
	words[1] = "is";
	words[2] = "fun";
	s = ft_strjoin(3, words, " / ");
	if (!s)
		return (1);
	printf("strjoin: %s\n", s);
	free(s);
	return (0);
}
