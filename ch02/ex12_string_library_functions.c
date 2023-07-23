#include <stdio.h>
#include <stdlib.h>
#include <string.h> // include the string library

int main()
{
	// variable declarations that will be used in examples
	int len;
	char str[32];
	char *d_str;

	strcpy(str, "Hello Threre");
	len = strlen(str);	// len is 11
	
	d_str = (char *) malloc(sizeof(char) * (len+1));
	if (d_str == NULL) {
		printf("Error: malloc failed\n");
		exit(1);
	}

	strncpy(d_str, str, 5);
	d_str[5] = '\0';   // explicitly add null terminating character to end
	
	printf("%lu:%s\n", strlen(str), str); // prints 11:Hello There
	printf("%lu:%s\n", strlen(d_str), d_str); // prints 5:Hello
	
	free(d_str);
	d_str = NULL;

	return 0;
}

