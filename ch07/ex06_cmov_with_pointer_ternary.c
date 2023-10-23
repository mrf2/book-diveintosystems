int incrementX2(int *x)
{
	return x ? (*x)++ : 1;
}

int main()
{
	int x = 3;

	x = incrementX2(&x);

	return 0;
}

