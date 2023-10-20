#include <stdio.h>

int getSmallest(int x, int y)
{
	int smallest;

	if (x <= y) {	// if (!conditional)
		goto else_statement;
	}

	smallest = y;	// then statement
	goto done;
else_statement:
	smallest = x;	// else statement
	
done:
	return smallest;
}

int main()
{
	int small;

	small = getSmallest(5, 4);

	return 0;
}

