#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char str[64];
	float avg = 76.8;
	int num = 2;
	int i;
	int len;

	// initialize str tor format string, filling in each placeholder with
	// a char representation of its argument's values
	sprintf(str, "%s is %d years old and in grade %d", "Hendry", 12, 7);
	printf("%s\n", str);	// prints: Henry is 12 years old and in grade 7
	

	sprintf(str, "The average grade on exam %d is %g", num, avg);
	printf("%s\n", str); // prints: The average grade on exam 2 is 76.8
	
	strcpy(str, "I see 20 ZEBRAS, GOATS, and COWS");
	if ( islower(str[2])) {
		printf("%c is lower case\n", str[2]); // prints: s is lower case
	}

	len = strlen(str);
	for (i = 0; i < len; i++) {
		if ( isupper(str[i])) {
			str[i] = tolower(str[i]);
		} else if ( isdigit(str[i])) {
			str[i] = 'X';
		}
	}

	printf("%s\n", str);	// prints: i see XX zebras, goats and cows
	
	// a functions to convert between strings to integer and float
	printf("%d %g\n", atoi("1234"), atof("4.56"));

	return 0;
}
