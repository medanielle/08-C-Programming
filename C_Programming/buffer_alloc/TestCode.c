
#include <stdio.h>
#include "TestCode.h"


/*
  (part one): This task will involve allocating a buffer
				of (sizeOfData) bytes, and reading up to that amount
				into it from the file specified in 'filename'. Additionally,
				the data in the file has been pseudo-encryped (poorly) with a single-
				byte XOR, which you will be required to undo (the byte that the buffer
				was XOR'd against will be provided in 'key'). Finally, assuming the task
				was successful, (and all pointers are valid) the pointer to the resulting 
				buffer should be stored in the area referenced by buffPtr.

 Expected Return Values:
			- task was completed successfully: ERROR_SUCCESS (0)
			- bad input was provided: ERROR_INVALID_PARAMETER (87)
			- you were unable to allocate enough memory: ERROR_OUTOFMEMORY (14)
			- you were unable to open the file: ERROR_OPEN_FAILED (110)
*/
int decodeFromFile(char* filename, unsigned int sizeOfData, unsigned char key, void** buffPtr)
{

	return 0;
}

/*
 (part two): The second part of the task; this simply requires you
				  to appropriately free the buffer allocated in the last task
				  (if possible).

 Expected Return Values:
			- the task completed successfully: 1  (true)
			- the task failed/bad input: 0 (false)
*/
int freeDecodedBuffer(void* buffer)
{
	int out = 0;

	return out;
}