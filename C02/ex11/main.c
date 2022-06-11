#include "ft_putstr_non_printable.c"
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main (void)
{
	char str[14][128] = {"a", "z", "`", "{", "A", "Z", "@", "[", "", "1234", "hello", "@", "\\", "{"};

	printf("--- ft_putstr_non_printable ---\n");

	for (int i = 0; i < 14; i++)
	{
		ft_putstr(str[i]);
		ft_putstr(" -> ");
		ft_putstr_non_printable(str[i]);
		ft_putstr("\n");
	}

	char c_str[2] = {'a', 0};

	printf("\n - Full ASCII charset -\n");

	for (int i = 0; i < 128; i++)
	{
		c_str[0] = i;
		ft_putchar(c_str[0]);
		ft_putstr(" -> ");
		ft_putstr_non_printable(c_str);
		ft_putstr("\n");
	}
	return (0);
}	