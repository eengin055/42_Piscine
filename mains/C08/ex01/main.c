#include "ft_boolean.h"

int	main(int argc, char **argv)
{
	t_bool even;

	(void)argv;
	even = EVEN(argc - 1);
	if (even == TRUE)
		write(1, EVEN_MSG, sizeof(EVEN_MSG) - 1);
	else
		write(1, ODD_MSG, sizeof(ODD_MSG) - 1);
	return (SUCCESS);
}
