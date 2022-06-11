#include "ft_str_is_alpha.c"
#include <stdio.h>

int main (void)
{
	char str[7][128] = {"Hello", "", "1234", "hel o", "@", "\\", "{"};

	printf("--- ft_str_is_alpha ---\n");
	for (size_t i = 0; i < 7; i++)
	{
		printf("%i - %s\n",ft_str_is_alpha(str[i]), str[i]);
	}

	char c_str[2] = {'a', 0};
	printf("- Full ASCII charset -\n");
	for (int i = 0; i < 128; i++)
	{
		c_str[0] = i;
		printf("%i - %s\n", ft_str_is_alpha(c_str), c_str);
	}
	return (0);
}