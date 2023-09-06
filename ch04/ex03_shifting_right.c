#include <stdio.h>

int main(int argc, char **argv)
{
	/* unsigned integer value: u_val. */
	unsigned int u_val = 0xFF000000;

	/* signed integer value: s_val. */
	int s_val = 0xFF000000;

	printf("Size of integer is: %lu bits\n", sizeof(int) * 8);
	printf("%08X\n", u_val >> 12);	// logical right shift
	printf("%08X\n", s_val >> 12);	// arithmetic right shift
	
	return 0;
}

