int sumUp(int n)
{
	// initialize total and i
	int total = 0;
	int i = 1;

	while (i <= n) {	// while i is less than or equal to n
		total += i;	// add i to total
		i++;		// increment i by 1
	}

	return total;
}

int main()
{
	int sum;

	sum = sumUp(10);

	return 0;
}


