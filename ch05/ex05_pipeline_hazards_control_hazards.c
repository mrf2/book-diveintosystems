#include <stdlib.h>

int main()
{
	int *x;
	int *y;
	x = (int *) malloc(sizeof(int));
	y = (int *) malloc(sizeof(int));

	*x = 5;
	*y = 6;

	int result = *x;	// x holds an int
	int temp = *y;

	if (result <= temp) {
		result = result - temp;
	}
	else {
		result = result + temp;
	}

	return result;
}
