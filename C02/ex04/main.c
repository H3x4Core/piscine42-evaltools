#include "ft_str_is_lowercase.c"
#include <stdio.h>

int main (void)
{
	char str[14][128] = {"a", "z", "`", "{", "A", "Z", "@", "[", "", "1234", "hel lo", "@", "\\", "{" };

	printf("--- ft_str_is_lowercase ---\n");
	for (int i = 0; i < 14; i++)
	{
		printf("%i - %s\n",ft_str_is_lowercase(str[i]), str[i]);
	}
	
	char c_str[2] = {'a', 0};
	printf("- Full ASCII charset -\n");
	for (int i = 0; i < 128; i++)
	{
		c_str[0] = i;
		printf("%i - %s\n", ft_str_is_lowercase(c_str), c_str);
	}
	return (0);
}
