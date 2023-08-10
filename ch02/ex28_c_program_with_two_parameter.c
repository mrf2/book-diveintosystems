#include <stdio.h>


int sum(int num1, int num2);

int main()
{	
	int a;
	int b;
	int result = 0;

	a = 5;
	b = 6;

	result = sum(a, b);

	printf("summation of %d and %d is %d\n", a, b, result);

	return 0;
}

