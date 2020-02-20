#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "TestCode.h"

/*

A Binary Search Tree (BST) is a tree in which all the nodes follow the below-mentioned properties:
        The left sub-tree of a node has a value less than its parent node's value.
        The right sub-tree of a node has a value greater than to its parent node's value.
        In this scenario, no duplicate values are allowed.
        
Task #1

Write the fucntion buildBST that receives an array of integers (nums) and an int representing the size
of the array. The function will build The BST by:

    1. Iterating the array
    2. Using the provided numNode struct defined in TestCode.h and creating Nodes for each value
       in the array.
    3. Inserting each Node into the BST.

If a value in the array is already in the BST, ignore the value and continue processing the rest of 
the array.

When complete, the function will return a pointer to the root node of the BST.

Task #2

Write the function destroyBST that receives a pointer to the root of a BST (root).
The function will visit each node in the BST and free each node essentially
deleting all nodes in the BST. The function will return a count of the total
number of nodes freed.

*/

struct numNode* buildBST(int nums[], int size)
{
    return NULL;
}


int destroyBST(struct numNode *root)
{
    return 0;
}
