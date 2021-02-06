#include "../include/minish.h"

static void			ft_putfd(char c)
{
	write(1, &c, 1);
}

void				ft_putnbr(int n)
{
	unsigned int	nbr;

	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		ft_putfd('-');
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putfd((nbr % 10) + '0');
}
