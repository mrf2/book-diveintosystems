int sumr(int n)
{
	if (n <= 0)
		return;

	return n + sumr(n - 1);
}

void main(void)
{
	int s;

	s = sumr(5);
}

