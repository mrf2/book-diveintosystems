#include <stdlib.h>

// Include the library header file if the implementation needs
// any of its definitions (types or constants, for example.)
// Use "" instead of <> if the mylib.h file is not in a default library
// path with other standard library header files
#include "mylib.h"

// declare the global variable exported by the library
int total_times = 0;

// include function definitions for each library function:
float bigger(float y, float z)
{
	total_times++;
	if (y > z) {
		return y;
	}

	return z;
}


