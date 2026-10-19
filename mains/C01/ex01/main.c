#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	test_nine(int *****p5)
{
	int ******p6;
	int *******p7;
	int ********p8;

	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	ft_ultimate_ft(&p8);
}

int	main(void)
{
	int n;
	int *p1;
	int **p2;
	int ***p3;
	int ****p4;

	n = 0;
	p1 = &n;
	p2 = &p1;
	p3 = &p2;
	p4 = &p3;
	test_nine(&p4);
	printf("ft_ultimate_ft: %d (expected 42)\n", n);
	return (0);
}
