#include <stdio.h>
#include "ft.h"

int	main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	ft_putstr("ft.h declarations work: ");
	ft_putchar('4');
	ft_putchar('2');
	printf(" (%d %d, len=%d, cmp=%d)\n", a, b,
		ft_strlen("42"), ft_strcmp("abc", "abc"));
	return (0);
}
