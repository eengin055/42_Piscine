#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	print_number(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int tab[3] = {1, 2, 3};

	ft_foreach(tab, 3, print_number);
	printf("\n");
	return (0);
}
