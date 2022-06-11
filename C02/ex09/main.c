#include "ft_strcapitalize.c"
#include <stdio.h>

int main(void)
{
	char str[14][128] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un", "salut, COMMENT-tu=vas#? 42mots quarante-deux; cinquante+et+un", "`CESTSUPER cO1OL", "{", "A", "Z", "@", "[", "", "1234", "HELLO the World 101", "@", "\\", "{"};

	printf("--- ft_strcapitalize ---\n");
	for (int i = 0; i < 14; i++)
	{
		printf("%s - ",str[i]);
		printf("%s\n", ft_strcapitalize(str[i]));
	}
	/*
	char c_str[2] = {'a', 0};
	printf("\n - Full printable ASCII charset -\n");
	for (int i = 48; i < 127; i++)
	{
		c_str[0] = i;
		printf("%c - %s\n", i, ft_strcapitalize(c_str));
	}*/
	return (0);
}