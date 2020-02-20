#include <gmock/gmock.h>


#include "TestCode.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int nums[] = {7, 3, 8, 9, 2, 6};
int nums2[] = {1, 2, 3, 4, 7, 5, 4, 6, 9, 11, 10};	

TEST(TestCase1, binaryTree)
{

    struct numNode* root = buildBST(nums, sizeof(nums) / sizeof(*nums));    
    ASSERT_EQ(root->val, 7); 
    ASSERT_EQ(root->right->val,  8); 
    ASSERT_EQ(root->right->right->val, 9);
    ASSERT_EQ(root->left->val, 3);
    ASSERT_EQ(root->left->right->val, 6);
    ASSERT_EQ(root->left->left->val, 2);
	ASSERT_EQ(destroyBST(root), 6);

	root = buildBST(nums2, sizeof(nums2) / sizeof(*nums2));    
	ASSERT_EQ(root->val, 1); 
	ASSERT_EQ(root->right->val, 2); 
	ASSERT_EQ(root->right->right->val, 3);
	ASSERT_EQ(root->right->right->right->val, 4);
	ASSERT_EQ(root->right->right->right->right->val, 7);
	ASSERT_EQ(root->right->right->right->right->right->val, 9);
	ASSERT_EQ(root->right->right->right->right->right->right->left->val, 10);
	ASSERT_EQ(root->right->right->right->right->right->right->val, 11);
	ASSERT_EQ(root->right->right->right->right->left->val, 5);
	ASSERT_EQ(root->right->right->right->right->left->right->val, 6);
	ASSERT_EQ(destroyBST(root), 10);
}





