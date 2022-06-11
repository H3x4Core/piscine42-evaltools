#include "ft_strlowcase.c"
#include <stdio.h>

int main(void)
{
	char str[14][128] = {"a", "z", "`", "{", "A", "Z", "@", "[", "", "1234", "HELLO the World 101", "@", "\\", "{"};

	printf("--- ft_strlowcase ---\n");
	for (int i = 0; i < 14; i++)
	{
		printf("%s - ",str[i]);
		printf("%s\n", ft_strlowcase(str[i]));
	}

	char c_str[2] = {'a', 0};
	printf("\n - Full printable ASCII charset -\n");
	for (int i = 48; i < 127; i++)
	{
		c_str[0] = i;
		printf("%c - %s\n", i, ft_strlowcase(c_str));
	}
	return (0);
}