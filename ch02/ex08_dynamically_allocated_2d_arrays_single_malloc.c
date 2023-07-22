#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4

void init2D(int *arr, int rows, int cols)
{
	int i;
	int j;

	for (i = 0; i < rows; i++) 
		for (j = 0; j < cols; j++)
			arr[i * cols + j] = i * cols + j + 1;
}

void print2D(int *arr, int row, int cols)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++)
			printf("%d\t", arr[i*cols + j]);
		printf("\n");
	}
}

int main()
{
	int *two_d_array;	// the type is a pointer to an int (the
				//	element type)
	// allocate in a sigle malloc of N x M int-sized elements:
	two_d_array = (int *) malloc (sizeof(int) * N * M);

	if (two_d_array == NULL) {
		printf("ERROR: malloc failed!\n");
		exit(1);
	}

	init2D(two_d_array, N, M);
	print2D(two_d_array, N, M);

	return 0;
}
