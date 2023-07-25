#include <stdio.h> // libary needed for printf

int main()
{
	float x, y;
	char ch;

	x = 4.50001;
	y = 5.199999;
	ch = 'a'; // ch stores ASCII value of 'a' (the value 97)
	
	// .1: print x and y with single precision
	printf("%.1f %.1f\n", x, y);

	printf("%6.1f \t %6.1f \t %c\n", x, y, ch);

	// ch+1 is 98, the ASCII value of 'b'
	printf("%6.1f \t %6.1f \t %c\n", x+1, y+1, ch+1);

	printf("%6.1f \t %6.1f \t %c\n", x*20, y*20, ch+2);

	return 0;
}


