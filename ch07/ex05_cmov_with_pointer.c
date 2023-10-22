#include <stddef.h>

int incrementX(int *x)
{
	if (x != NULL) {	// if x is not NULL
		return (*x)++;	// increment x
	}
	else {			// if x is NULL
		return 1;	// return 1
	}
}

int main()
{
	int x = 2;

	x = incrementX(&x);

	return 0;
}

