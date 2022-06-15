#include "ft_fibonacci.c"
#include <stdio.h>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int main(void)
{
	int fibonnacci[47] = {0,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,196418,317811,514229,832040,1346269,2178309,3524578,5702887,9227465,14930352,24157817,39088169,63245986,102334155,165580141,267914296,433494437,701408733,1134903170,1836311903};
	
	int nfib;

	for (int i = 0; i < 25; i++)
	{
		nfib = ft_fibonacci(i);
		printf("%02d : %i", i, nfib);
		if (nfib == fibonnacci[i])
			printf(ANSI_COLOR_GREEN " [OK]\n" ANSI_COLOR_RESET);
		else
			printf(ANSI_COLOR_RED " [KO]\n" ANSI_COLOR_RESET);
	}
	return (0);
}