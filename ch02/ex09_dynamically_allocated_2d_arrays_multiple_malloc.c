#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 4
/*
 * initialize a 2D array
 * arr: the array
 * rows: number of rows
 * cols: number of columns
 */

void init2D_array(int **arr, int rows, int cols)
{
	int i, j;

	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			arr[i][j] = i*cols + j + 1;
}

void print_2d_array(int **arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}

/*
 * main: example of calling init2D_array() and print_2d_array()
 */

int main()
{
	/*
	 * the 2D array variable is declared to be `int **` ( a pointer to an
	 * int *) a dynamically allocated array of dynamically allocated int 
	 * arrays (a pointer to pointers to ints)
	 */

	int **two_d_array;
	int i;

	/* allocate an array of N pointers to ints, malloc returns the address
	 * of this array (a pointer to (int *)'s 
	 */
	two_d_array = (int **) malloc (sizeof (int *) * N);


	// for each row, malloc space for its column elemnts and it to
	// the array of arrays
	for (i = 0; i < N; i++) {
		// malloc space for row i's M column elements
		two_d_array[i] = (int *) malloc(sizeof(int) * M);
	}

	init2D_array(two_d_array, N, M);
	print_2d_array(two_d_array, N, M);

	// deallocate memory spaces
	for (i = 0; i < N; i++) {
		free(two_d_array[i]);
		two_d_array[i] = NULL;
	}

	free(two_d_array);
	two_d_array = NULL;

	return 0;
}

