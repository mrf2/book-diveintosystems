#include <stdio.h>

int sumArray(int *array, int length)
{
	int i;
	int total = 0;

	for (i = 0; i < length; i++)
		total += array[i];

	return total;
}

int main(void)
{
	int nums[5];

	for (int i = 0; i < 5; i++)
		nums[i] = i + 3 + i * i;

	printf("%d", sumArray(nums, 5));

	return 0;
}

