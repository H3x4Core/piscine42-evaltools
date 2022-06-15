#include <stdio.h>
#include <math.h>
#include "ft_sqrt.c"

int main(void)
{
	int result;
	for (int i = 0; i <= 1000; i++)
	{
		result = ft_sqrt(i);
		if (result)
		{
			printf("ft_sqrt of %3d = %d\n", i, result);
			printf("sqrt    of %3d = %d\n", i, (int)sqrt(i));
		}
	}
	return (0);
}
