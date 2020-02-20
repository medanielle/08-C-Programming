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

// C program to demonstrate insert operation in binary search tree. 
#include<stdio.h> 
#include<stdlib.h> 

// A utility function to create a new BST node 
struct numNode *newNode(int item) 
{ 
	struct numNode *temp = (struct numNode *)malloc(sizeof(struct numNode)); 
	temp->val = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

// A utility function to do inorder traversal of BST 
void inorder(struct numNode *root) 
{ 
	if (root != NULL) 
	{ 
		inorder(root->left); 
		printf("%d \n", root->val); 
		inorder(root->right); 
	} 

} 

/* A utility function to insert a new node with given key in BST */
struct numNode* insert(struct numNode* node, int key) 
{ 
	/* If the tree is empty, return a new node */
	if (node == NULL) return newNode(key); 

	//If a value in the array is already in the BST, ignore the value /continue processing the rest of the array.
    if (key == node->val)
        return node;
    
    /* Otherwise, recur down the tree */
	if (key < node->val) 
		node->left = insert(node->left, key); 
	else if (key > node->val) 
		node->right = insert(node->right, key); 

	/* return the (unchanged) node pointer */
	return node; 
} 
/*
// A utility function to do inorder traversal of BST 
int destroyBST(struct numNode *root) 
{ 
	if (root != NULL) 
	{ 
		destroyBST(root->left); 
		//printf(" Deleted %d \n", root->val); 
		destroyBST(root->right); 
        //printf("Deleted %d \n", root->val); 
        free(root);
	} 
    printf("Deleted!");
    return 0;
} 
*/
int destroyBST(struct numNode *root)
{
    int c =  1;             //Node itself should be counted
    if (root == NULL)
        return 0;
    else
    {
        c += destroyBST(root->left);
        c += destroyBST(root->right);
        free(root);
        return c;
    }
}

// Driver Program to test above functions 
int my_test() 
{ 
	/* Let us create following BST 
			50 
		/	 \ 
		30	 70 
		/ \ / \ 
	20 40 60 80 */
	struct numNode *root = NULL; 
	root = insert(root, 50); 
	insert(root, 30); 
    insert(root, 30);
	insert(root, 20); 
	insert(root, 40); 
	insert(root, 70); 
	insert(root, 60); 
	insert(root, 80); 
    insert(root, 80);

	// print inoder traversal of the BST 
	inorder(root); 

    // destroy
    destroyBST(root);

    //print again
    inorder(root);
	return 0; 
} 


struct numNode* buildBST(int nums[], int size)
{
    struct numNode *root = NULL;
    root = insert(root, nums[0]); 
    for (int i = 1; i < size; i++)
    {
        insert(root, nums[i]);
    }
    return root;
}

int main()
{
    int nums[] = {7, 3, 8, 9, 2, 6};
    int nums2[] = {1, 2, 3, 4, 7, 5, 4, 6, 9, 11, 10};	

    struct numNode* root = NULL;
    root = buildBST(nums, sizeof(nums) / sizeof(*nums)); //sizeof(nums) / sizeof(*nums)

    //inorder(root);

    printf("%d\n", root->val); // 7); 
    printf("%d\n", root->right->val); // ,  8); 
    printf("%d\n", root->right->right->val); // , 9);
    printf("%d\n", root->left->val); // , 3);
    printf("%d\n", root->left->right->val); // , 6);
    printf("%d\n", root->left->left->val); // , 2);
	printf("%d\n", destroyBST(root)); // , 6);

    printf("\n\n");
    root = buildBST(nums2, sizeof(nums2) / sizeof(*nums2));    
	printf("%d\n", root->val); //, 1); 
	printf("%d\n", root->right->val); //, 2); 
	printf("%d\n", root->right->right->val); //, 3);
	printf("%d\n", root->right->right->right->val); //, 4);
	printf("%d\n", root->right->right->right->right->val); //, 7);
	printf("%d\n", root->right->right->right->right->right->val); //, 9);
	printf("%d\n", root->right->right->right->right->right->right->left->val); //, 10);
	printf("%d\n", root->right->right->right->right->right->right->val); //, 11);
	printf("%d\n", root->right->right->right->right->left->val); //, 5);
	printf("%d\n", root->right->right->right->right->left->right->val); //, 6);
	printf("%d\n", destroyBST(root)); //, 10);
}




