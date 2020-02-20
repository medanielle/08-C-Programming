/*

Write the function writeNames that receives four (4) parameters:
   1. fnames (char ** array)  - represents char * strings of people's first names
   2. lnames (char ** array)  - represents char * strings of people's last names
   3. sz (int) - the size of both arrays (both arrays will be same length)
   4. fileName - the name of the file to write data to.

The writeNames function will process the arrays and write each person's last name
and first name to the file name passed. Each line of the file should contain 
a person's last name, followed by a comma and a space, then the first name such as:

Smith, John
Jones, Sally

The first names and last names align to the same index in each array.  For example, a person's first
name will be in fnames[0] and their last name in lnames[0].

Ensure when you write the names out to the files, the first letter of each name is capitalized like
the example above.

Ensure that the last line of the file does NOT contain a newline char (\n) at the end.

If the sz is 0 or less, or if the length of any of the names are zero (0), the function 
should return 0 without creating a file.
Otherwise, the function should return 1.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "TestCode.h"

int writeNames(char ** fnames, char ** lnames, int sz, char *fileName)
{
	return 0;
}
