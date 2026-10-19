#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('A');
	write(1, "\n", 1);
	return (0);
}
