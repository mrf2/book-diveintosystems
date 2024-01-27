#include <stdio.h>
#include <stdlib.h>

#define ROWS 4
#define COLS 3

int sumMat(int *m, int rows, int cols)
{
	int i;
	int j;
	int total = 0;

	for (i = 0; i < rows; i++) {
		for ( j = 0; j < cols; j++) {
			total += m[i * cols + j];
		}
	}

	return total;
}

int sumMatrix(int **matrix, int rows, int cols)
{
	int i;
	int j;
	int total = 0;

	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			total += matrix[i][j];
		}
	}

	return total;
}

int main()
{

	// statically allocated matrix (allocated on stack)
	int M1[4][3];
	int i;
	int j;
	int k;
	int total = 0;

	// filling the array
	k = 0;
	for (i = 0; i < 4; i++)
		for( j = 0; j < 3; j++)
			M1[i][j] = ++k;

	total = sumMat(M1[0], 4, 3);
	printf("Summation of the contents of Matrix M1 is: %d\n", total);

	// dynamically allocated matrix (programmer friendly, allocated on heap)
	int **M2;
	M2 = malloc(4 * sizeof(int *));
	for (i = 0; i < 4; i++)
		M2[i] = malloc (3 * sizeof(int));

	// dynamic matrix (allocated on heap, memory efficient way)
	int *M3;
	
	// element (i,j) cannot be accessed using the M[i][j] notation.
	// Instead, we must index the element using the format M3[i*COLS + j]
	
	M3 = malloc(ROWS * COLS * sizeof(int));	
	
	return 0;
}

