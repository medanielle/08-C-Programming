#pragma once


#include <stdio.h>

struct numNode
{
	int num;
	struct numNode *next;
};


#ifdef __cplusplus
extern "C" {
#endif
	// Task One
	struct numNode * createStack(int [], int);

#ifdef __cplusplus
}
#endif