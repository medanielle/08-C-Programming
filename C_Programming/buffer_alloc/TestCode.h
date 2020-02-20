#pragma once

#include <stdio.h>


#ifdef __cplusplus
extern "C" {
#endif

	// Task Three
	int decodeFromFile(char* filename, unsigned int sizeOfData, unsigned char key, void** buffPtr);
	int freeDecodedBuffer(void* buffer);

#ifdef __cplusplus
}
#endif