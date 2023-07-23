#include <stdio.h>
#include <stdlib.h>
#include <string.h>	// inculde the string library

int main()
{
	// variable declarations that will be used in examples
	int len;
	int i;
	int ret;
	char str[32];
	char *d_str;
	char *ptr;

	strcpy(str, "Hello There");
	len = strlen(str);	// len is 11
	
	d_str = (char *) malloc(sizeof(char) * (len + 1));
	if (d_str == NULL) {
		printf("Error: malloc failed\n");
		exit (1);
	}

	strncpy(d_str, str, 5);
	d_str[5] = '\0'; // explicitly add null terminating character to end
	
	printf("%lu:%s\n", strlen(str), str);
	printf("%lu:%s\n", strlen(d_str), d_str);

	strcpy (str, "alligator");
	strcpy (d_str, "Zebra");

	ret = strcmp (str, d_str);
	if (ret == 0) {
		printf("%s is equal to %s\n", str, d_str);
	} else if (ret < 0) {
		printf("%s is less than %s\n", str, d_str);
	} else {
		printf("%s is greater than %s\n", str, d_str); // true for
							       // these strings
	}

	ret = strncmp(str, "all", 3); // return 0: they are equal up to first
				      //	3 chars
	printf("return value of \"strncmp(str, all, 3)\" is: %d\n", ret);

	strcpy (str, "Zebra fish");
	strcat (str, " stripes"); // str gets "Zebra ish stripes"
	printf("%s\n", str); 	  // prints: Zebra fish stripes
	
	strncat (str, " are black.", 8);
	printf("%s\n", str);	// prints: Zebra fish stripes are bla (spaces
				//	count)
	ptr = strstr(str, "trip");
	if (ptr != NULL) {
		printf("%s\n", ptr); // prints: tripes are bla
	}

	ptr = strchr(str, 'e');
	if (ptr != NULL) {
		printf("%s\n", ptr); // prints: ebra fish stripes are bla
				     //
	}

	return 0;
}

