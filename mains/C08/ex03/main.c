#include <stdio.h>
#include "ft_point.h"

int	main(void)
{
	t_point point;

	point.x = 10;
	point.y = 20;
	printf("point: (%d, %d)\n", point.x, point.y);
	return (0);
}
