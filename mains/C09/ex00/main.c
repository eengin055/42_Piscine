#include <stdio.h>
#include "ft.h"

int	main(void)
{
	int a;
	int b;

	a = 10;
	b = 20;
	ft_swap(&a, &b);
	ft_putstr("libft test: ");
	ft_putchar('X');
	printf(" (%d %d, len=%d, cmp=%d)\n", a, b,
		ft_strlen("hello"), ft_strcmp("a", "b"));
	return (0);
}
