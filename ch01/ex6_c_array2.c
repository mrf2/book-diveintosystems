#include <stdio.h>

void test(int*, int);

int main()
{
	int arr[5];
	int n = 5;
	int i;

	for (i = 0; i < n; i++)
	{
		arr[i] = i;
	}

	printf("%d %d", arr[3], n);	// prints: 3 5
	
	test (arr, n);

	printf("%d %d", arr[3], n);	// prints: 8 5
	
	return 0;
}

void test(int a[], int size)
{
	if (size > 3)
	{
		a[3] = 8;
	}

	size = 2; // changing parameter does NOT change argument
}

