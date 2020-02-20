#pragma once


#include <stdio.h>

struct nameNode
{
	char  *name;
	struct nameNode *next;
	struct nameNode *prev;
};


#ifdef __cplusplus
extern "C" {
#endif
    struct nameNode* buildList(char**, int);
    struct nameNode* removeNode(struct nameNode*, char*);
	void freeMemory(struct nameNode *);
#ifdef __cplusplus
}
#endif