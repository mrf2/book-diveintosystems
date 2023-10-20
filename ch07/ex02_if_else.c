#include <stdio.h>

int getSmallest(int x, int y)
{
	int smallest;

	if (x > y) {	// if (conditional)
		smallest = y;	// then statement
	}
	else {
		smallest = x;	// else statement
	}

	return smallest;
}

int main()
{
	int small;

	small = getSmallest(5, 4);

	return 0;
}

