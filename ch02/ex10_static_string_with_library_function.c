#include <stdio.h>
#include <string.h> // include the C string library

int main()
{
	char str1[10];
	char str2[10];

	str1[0] = 'h';
	str1[1] = 'i';
	str1[2] = '\0';	// explicitly add null terminating charactder to end
	
	// strcpy() copies the bytes from the source parameter (str1) to the
	// destination parameter (str2) and null terminates the copy.
	strcpy(str2, str1);
	str2[1] = 'o';
	printf("%s %s\n", str1, str2); // prints: hi ho
	
	str1[1] = '\0';
	printf("%s %s\n", str1, str2); // prints: h ho
	
	return 0;
}

