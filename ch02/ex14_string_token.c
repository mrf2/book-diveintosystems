/*
 * Extract whitespace-delimited tokens from a line of input
 * and print them one per line.
 *
 * to compile:
 *	gcc -o -Wall sourcefile.c
 *
 * example run:
 *	Enter a line of text: aaaaa   bbbbbbbb  cccccc
 *
 *	The input line is:
 *		 aaaaa   bbbbbbbb  cccccc
 *	Next token is aaaaa
 *	Next token is bbbbbbbb
 *	Next token is cccccc
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	/*
	 * Whitespae stores the delim string passed to strtok. The delim
	 * string is initialized to the set of characters that delimit tokens
	 * We initialize the delim string to the following set of chars:
	 * ' ': space  '\t': tab  '\f': form feed '\r': carriage return
	 * '\v': vertical tab   '\': new line
	 *
	 * (run "man ascii" to list all ASCII characters)
	 *
	 * This line shows one way to statically initialize a string variable
	 * (using this method the string contents are constant, meaning that
	 * they cannot be modified, which is fine for the way we are using the
	 * whitespace string in this program).
	 */

	char *whitespace = " \t\f\r\v\n"; /* Note the space char at beginning */
	
	char *token;	/* The next token in the line. */
	char *line; /* The line of text read in that we will tokenize. */

	/* Allocate some space for the user's string on the heap. */
	line = malloc (sizeof(char) * 200);
	if (line == NULL) {
		printf("Error: malloc failed\n");
		exit(1);
	}

	/* Read in a line entered by the user from "standard in". */
	printf("Enter a line of text: \n");
	line = fgets(line, sizeof(char) * 200, stdin);
	if (line == NULL) {
		printf("Error: reading input failed, exiting...\n");
		exit(1);
	}

	printf("The input line is:\n%s\n", line);

	/* Divide the string into tokens. */
	token = strtok(line, whitespace);	/* get the first token */
	while (token != NULL) {
		printf("Next token is %s\n", token);
		token = strtok(NULL, whitespace); /* get the next token */
	}

	free(line);

	return 0;
}

