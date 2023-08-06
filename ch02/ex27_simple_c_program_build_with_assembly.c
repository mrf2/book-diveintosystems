#include <stdio.h>

int myfunc(int param);
int myfunc2(int param);

int main()
{
	int ret;

	ret = myfunc(32);
	// ret = myfunc2(32);

	printf("myfunc(32) is %d\n", ret);

	return 0;
}

