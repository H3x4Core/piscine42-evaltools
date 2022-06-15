#include "ft_putnbr.c"
#include <stdio.h>

int	main(void)
{	
	int nbr[6] = {0, 1, -1, -2147483648, 2147483647, 2147483648};
	for (long int i = 0; i < 6; i++)
	{
		write(1,"ft_putnbr: ", 11);
		ft_putnbr(nbr[i]);
		write(1, "\n", 1);
	}

	return (0);
}