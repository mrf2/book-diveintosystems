int get_smaller(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	int small;

	small = get_smaller(5, 9);

	return 0;
}

