#include <stdio.h>
#include "ft_strstr.c"
#ifdef __linux__
	#include <bsd/string.h>
#elif __APPLE__
	#include <string.h>
#endif

#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void test_1(int i)
{
	char str1[4][500] = {"01231451242345234523411234","145484515684","a towel has immense psychological value","10a010"};
	char str2[4][500] = {"2341","0","psy","9"};

	printf("-- strstr --\n");
	printf("haystack : %s\nneedle : %s\n", str1[i], str2[i]);
	printf(ANSI_COLOR_GREEN "strstr : %s\n" ANSI_COLOR_RESET, strstr(str1[i], str2[i]));
}

void test_2(int i)
{
	char str1[4][500] = {"01231451242345234523411234","145484515684","a towel has immense psychological value","10a010"};
	char str2[4][500] = {"2341","0","psy","9"};

	printf("-- ft_strstr --\n");
	printf("haystack : %s\nneedle : %s\n", str1[i], str2[i]);
	printf(ANSI_COLOR_GREEN "ft_strstr : %s\n" ANSI_COLOR_RESET, ft_strstr(str1[i], str2[i]));
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