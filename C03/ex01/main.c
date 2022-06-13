#include "ft_strncmp.c"
#include <stdio.h>
#ifdef __linux__
	#include <bsd/string.h>
#elif __APPLE__
	#include <string.h>
#endif

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void test_1(int i)
{
	char str1[4][128] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][128] = {"1","0","a towel has immense psychol0000al value","101010"};
	unsigned int n[4] = {1, 1, 20, 20};

	printf("-- strncmp --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "strncmp : %i\n" ANSI_COLOR_RESET, strncmp(str1[i], str2[i], n[i]));

}


void test_2(int i)
{
	char str1[4][128] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][128] = {"1","0","a towel has immense psychol0gical value","101010"};
	unsigned int n[4] = {1, 1, 20, 20};

	printf("-- ft_strncmp --\n");
	printf("str1 : %s\nstr2 : %s\nn    : %d\n", str1[i], str2[i], n[i]);
	printf(ANSI_COLOR_GREEN "strncmp : %i\n" ANSI_COLOR_RESET, ft_strncmp(str1[i], str2[i], n[i]));

}


int main (void)
{
	for (int i = 0; i < 4; i++)
	{
		test_1(i);
		test_2(i);
	}
	return (0);
}