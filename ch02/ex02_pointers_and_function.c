/*
 * Implementing and calling a function with a pass by pointer parameter
 */

#include <stdio.h>

int change_value(int *);

int main()
{
	int x;
	int y;

	x = 30;
	y = change_value(&x);
	printf("x: %d y: %d\n", x, y);	// prints x: 100 y: 30
	
	return 0;
}

int change_value(int *input)
{
	int val;

	val = *input;	/* val gets the value input points to */

	if (val < 100)
		*input = 100;	/* the value input points to gets 100 */
	else
		*input = val * 2;

	return val;
}

