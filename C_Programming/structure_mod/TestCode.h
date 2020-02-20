#pragma once


#include <stdio.h>

typedef enum {
	TypeBitmask,
	TypeFuncPtr,
} StructType;

typedef struct {
	SLIST_ENTRY			list; // This is a Microsoft provided data structure containing a single item: a pointer to "Next"
	unsigned long		id;
	StructType			type;
	union {
		unsigned long	bitmask;
		int(*func)(unsigned long param);
	} u;
} CONTAINER, *PCONTAINER;

#ifdef __cplusplus
extern "C" {
#endif

	// Task Four
	int structureMod(PCONTAINER startNode, unsigned long id, unsigned long action, int* result);

#ifdef __cplusplus
}
#endif