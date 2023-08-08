#include <stdio.h>

int myfunc(int param);
int myfunc2(int param);

int main()
{
	int ret;

	ret = myfunc(50);
	// ret = myfunc2(50);

	printf("myfunc(50) is %d\n", ret);

	return 0;
}

