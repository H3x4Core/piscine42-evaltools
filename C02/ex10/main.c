#include "ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

int test_1(void)
{
	printf("-- ft_strlcpy --\n");

	unsigned int	size_0 = 10;
	unsigned int	size_1 = 0;

	char dest_0[10] = {""};
	char src_0[sizeof("Hello World 11!")] = {"Hello World 11!"};
	
	printf("dest_0: %p\n", dest_0);
	printf("src_0 : %p\n", src_0);

	size_1 = ft_strlcpy(dest_0, src_0, size_0);
	printf("sz0: %i\nsz1: %i\nsrc: %s\ndst: %s\n", size_0, size_1, src_0, dest_0);
	return (0);
}

int test_2(void)
{
	// original function for output check
	// add -lbsd , or the more portable $(pkg-config --libs libbsd) , to your gcc command line to link the library
	
	printf("-- strlcpy --\n");

	unsigned int	size_0 = 10;
	unsigned int	size_1 = 0;

	char dest_0[10] = {""};
	char src_0[sizeof("Hello World 11!")] = {"Hello World 11!"};
	
	printf("dest_0: %p\n", dest_0);
	printf("src_0 : %p\n", src_0);

	size_1 = strlcpy(dest_0, src_0, size_0);
	printf("sz0: %i\nsz1: %i\nsrc: %s\ndst: %s\n", size_0, size_1, src_0, dest_0);
	return (0);
}

int main(void)
{
	test_1();
	test_2();
	return (0);
}