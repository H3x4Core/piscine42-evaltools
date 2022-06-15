#include "ft_strlen.c"
#include <stdio.h>
#ifdef __linux__
	#include <bsd/string.h>
#elif __APPLE__
	#include <string.h>
#endif

int main (void)
{
	char str[4][128] = {"Hello World !", "12345", "", "C bon pour la santé"};
	printf("--- ft_strlen ---\n");
	
	for (size_t i = 0; i < 4; i++)
	{
		printf("\"%s\"\nft_strlen : %i\n",str[i], ft_strlen(str[i]));
	}
	return (0);
}