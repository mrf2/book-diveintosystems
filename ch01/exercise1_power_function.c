#include <stdio.h>

int power(int, int);

int main()
{
	int result;
	int base;
	int exp;

	printf("Enter the value of base: ");
	scanf("%d", &base);
	printf("Enter the value of exp: ");
	scanf("%d", &exp);


	result = power(base, exp);

	printf("%d to power of %d is: %d\n", base, exp, result);
	
	return 0;
}

int power(int base, int exp)
{
	int result = 1;

	for (int i = 1; i <= exp; i++)
		result *= base;

	return result;
}
			
