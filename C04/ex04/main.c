#include <stdio.h>
#include <unistd.h>
#include "ft_putnbr_base.c"

int main (void)
{
	char	base[7][128] = {"0123456789", "01", "0123456789ABCDEF", "poneyvif", "01234", "aabc", "+42"};

	for (size_t i = 0; i < 5; i++) 			// Base
	{
		printf("\nBASE : %s\n", base[i]); 
		for (int j = -5; j <= 5; j++)		// Number
		{
			printf("%d in \"%s\"\n", j, base[i]);
			ft_putnbr_base(j, base[i]);
			printf("\n");
		}
	}
	return (0);
}
