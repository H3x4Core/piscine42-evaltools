#include "ft_atoi.c"
#include <stdlib.h>
#include <stdio.h>
#ifdef __linux__
	#include <bsd/string.h>
#elif __APPLE__
	#include <string.h>
#endif

void test_1(char *str)
{
	printf("atoi    : %i\n", atoi(str));
}

void test_2(char *str)
{
	printf("ft_atoi : %i\n", ft_atoi(str));
}

int main (void)
{
	char str[5][128] = {"0", "-1", "1", "    ---+--+1234ab567", "\t\n\v\f\r-10"};

	for (int i = 0; i < 5; i++)
	{
		test_1(str[i]);
		test_2(str[i]);
	}
	return (0);
}