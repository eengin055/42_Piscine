#include <unistd.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Bonjour\n42\t!");
	write(1, "\n", 1);
	return (0);
}
