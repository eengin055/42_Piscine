#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	ft_putstr("Hello from C04");
	write(1, "\n", 1);
	return (0);
}
