#include <stdio.h>

int main()
{
	unsigned char x = 13; // 13 is 0b00001101
	
	printf("The value of x is: %u\n", x);

	// shifting left means multiply by 2 for each bit place
	printf("The value of x after shifting one bit to left is: %u\n", x<<1);

	printf("The value of x after shifting two bits to left is: %u\n", x<<2);

	return 0;
}

