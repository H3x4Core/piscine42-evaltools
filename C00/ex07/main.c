#include "ft_putnbr.c"
#include <stdio.h>

int	main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(+42);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
}