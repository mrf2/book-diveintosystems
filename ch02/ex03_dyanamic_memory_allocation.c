#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;

	p = (int *) malloc(sizeof(int)); // allocate heap memory for storing an int
	
	if (p == NULL) {
		printf("Bad malloc error\n");
		exit(1); // exit the program and indicate error
	}

	*p = 6; // the heap memory p points to gets the value 6
	
	// printing the value point by p
	printf("The value stored in the dyanmically allocated memory is : %d\n", *p);

	// deallocate the memory
	free(p);
	p = NULL;

	return 0;
}

