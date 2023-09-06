#include <stdio.h>

int main(int argc, char **argv)
{
	// Initialize a four-byte integer with easily distinguishable byte
	// values
	int value = 0xAABBCCDD;

	// Initialize a character pointer to the address of the integer.
	char *ptr = (char *) &value;

	// For each byte in the integer, print its memory address and value.
	int i;
	for (i = 0; i < sizeof(value); i++) {
		printf("Address: %p, Value: %02hhX\n", ptr, *ptr);
		ptr += 1;
	}

	return 0;
}

