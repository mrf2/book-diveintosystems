#include <stdio.h>
#include <stdlib.h>

void foo(int *b, int c, int *arr, int n);
void blah(int *r, int s);

int main()
{
	int x;
	int y;
	int *arr;

	arr = (int *) malloc (sizeof(int) * 5);
	if (arr == NULL) {
		printf("memory allocation failed.");
		exit(1); // should print out nice error msg first
	}

	x = 10;
	y = 20;
	printf("x = %d y = %d\n", x, y);
	foo(&x, y, arr, 5);
	printf("x = %d y = %d arr[0] = %d arr[3] = %d\n", x, y, arr[0], arr[3]);
	
	free(arr);
	arr = NULL;

	return 0;
}

void foo(int *b, int c, int *arr, int n)
{
	int i;
	c = 2;

	for (int i = 0; i < n; i++) {
		arr[i] = i + c;
	}

	*arr = 13;
	blah(b, c);
}

void blah(int *r, int s)
{
	*r = 3;
	s = 4;
}


