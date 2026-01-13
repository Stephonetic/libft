#include <unistd.h>
#include "libft.h"

int	main(void)
{
	ft_putchar_fd('H', 1);
	ft_putchar_fd('i', 1);
	ft_putchar_fd('!', 1);
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('T', 2);
	ft_putchar_fd('E', 2);
	ft_putchar_fd('S', 2);
	ft_putchar_fd('T', 2);
	ft_putchar_fd('\n', 2);

	return (0);
}
