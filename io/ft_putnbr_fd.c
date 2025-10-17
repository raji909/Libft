#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n = -2147483648)
	{
		write(fd, "-2", 2);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', fd);
	}
	if (n > 9)
		ft_putnbr_fd(n / 10)
	ft_putchar((n % 10) + 48, fd);
}