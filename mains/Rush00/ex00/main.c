#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush(5, 3);
	write(1, "\n", 1);
	rush(1, 1);
	return (0);
}
