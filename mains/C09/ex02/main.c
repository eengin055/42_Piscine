#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char **parts;
	int i;

	parts = ft_split("one,two;three", ",;");
	if (!parts)
		return (1);
	i = 0;
	while (parts[i])
	{
		printf("part %d: %s\n", i, parts[i]);
		free(parts[i++]);
	}
	free(parts);
	return (0);
}
