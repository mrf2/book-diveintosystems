#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int s_array[20];
	int *d_array;

	d_array = (int *) malloc(sizeof(int) * 20);
	if (d_array == NULL) {
		printf("Error: malloc failed\n");
		exit(1);
	}

	for (int i = 0; i < 20; i++) {
		s_array[i] = i;
		d_array[i] = i;
	}

	printf("%d %d\n", s_array[3], d_array[3]);

	return 0;
}

