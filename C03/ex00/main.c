#include "ft_strcmp.c"
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

	printf("-- strcmp --\n");
	printf("str1 : %s\nstr2 : %s\n", str1[i], str2[i]);
	printf(ANSI_COLOR_GREEN "strcmp : %i\n" ANSI_COLOR_RESET, strcmp(str1[i], str2[i]));

}


void test_2(int i)
{
	char str1[4][128] = {"0","1","a towel has immense psychological value","10a010"};
	char str2[4][128] = {"1","0","a towel has immense psychol0gical value","101010"};

	printf("-- ft_strcmp --\n");
	printf("str1 : %s\nstr2 : %s\n", str1[i], str2[i]);
	printf(ANSI_COLOR_GREEN "strcmp : %i\n" ANSI_COLOR_RESET, ft_strcmp(str1[i], str2[i]));

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