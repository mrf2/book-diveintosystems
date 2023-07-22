#include <stdio.h>

// a C constant definition: COLS is defined to be the value 100
#define COLS (100)

/*
 * init_matrix: initializes the passed matrix elements to the product of
 *		their index values
 *	m: a 2D array (the column dimension must be 100)
 *	 rows: the number of rows in the matrix
 *	 return: does not return a value
 */

void init_matrix(int m[][COLS], int rows) {
	int i, j;

	for (i = 0; i < rows; i++)
		for (j = 0; j < COLS; j++)
			m[i][j] =  i * j;
}

void display_matrix(int m[][COLS], int rows) {
	for (int i = 0; i < rows; i++) {
		printf("row: %d: ", i);
		for (int j = 0; j < COLS; j++)
			printf("%d ", m[i][j]);
		printf("\n");
	}
}

int main()
{
	int matrix[50][COLS];
	int bigger[90][COLS];

	init_matrix(matrix, 50);
	init_matrix(matrix, 90);

	/* printing matrix contnets */
	display_matrix(matrix, 50);
	display_matrix(bigger, 90);

	return 0;
}

