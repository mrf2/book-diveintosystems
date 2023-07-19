/*
 * Write a new program, that implements your own version of a string copy
 * function that takes a destination and a source string and copies the source
 * string to the destination string. Test it out in main by making calls to 
 * your string copy function with different string inputs and printing out
 * the string copy results after each call.
 */

#include <stdio.h>

int string_copy(char*, const char *);

int main()
{
	char *str1 = "Hello Bangladesh";
	char *str2 = "Hello World";

	char arr[30];

	printf("String 1 content is: %s\n", str1);
	string_copy(arr, str1);
	printf("After copying string1 to arr, array content is: %s\n", arr);
	printf("String 2 content is: %s\n", str2);
	string_copy(arr, str2);
	printf("After copying string2 to arr, array content is: %s\n", arr);

	return 0;
}

int string_copy(char *arr, const char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		*arr++ = *str++;
		count++;
	}
	*arr = '\0';

	return count;
}

