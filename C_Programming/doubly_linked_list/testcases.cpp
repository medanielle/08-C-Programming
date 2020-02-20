#include <gmock/gmock.h>

#include "TestCode.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


char* names[] = { "Joe","Ace","Gene","Paul","Peter","Hank","Timmy","Sarah","Alice","Carol" };
// The reverse of names
char* names2[] = { "Carol","Alice","Sarah","Timmy","Hank","Peter","Paul","Gene","Ace","Joe" };
char* names3[] = { "Joe","Ace","Gene","Paul","Hank","Timmy","Sarah","Alice","Carol" };
// The reverse of names3
char* names4[] = { "Carol","Alice","Sarah","Timmy","Hank","Paul","Gene","Ace","Joe" };
char* names5[] = { "Ace","Gene","Paul","Hank","Timmy","Sarah","Alice","Carol" };
// The reverse of names5
char* names6[] = { "Carol","Alice","Sarah","Timmy","Hank","Paul","Gene","Ace" };
char* names7[] = { "Ace","Gene","Paul","Hank","Timmy","Sarah","Alice" };
// The reverse of names7
char* names8[] = { "Alice","Sarah","Timmy","Hank","Paul","Gene","Ace" };
char* names9[] = { "Bobby" };

TEST(TestCase1, checkDoubleList)
{
    // Keep in mind the list will be in reverse order
    struct nameNode* head = buildList(names, sizeof(names) / sizeof(*names));
    struct nameNode* curr = head;
    struct nameNode* prev = head;
    int i = 0;

    while (curr != NULL)
    { // Check to see if all names in the list are present and point to the next expected name
        ASSERT_EQ(0, strcmp(curr->name, names2[i]));
        prev = curr;
        curr = curr->next;
        i++;
    }
    // Checks to see if the list is the same size as the array
    ASSERT_EQ(sizeof(names) / sizeof(*names), i);

    if (curr == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    i = 0;
    while (prev != NULL)
    { // Check to see if the expected names in the list are present and point to the previous expected name
        ASSERT_EQ(0, strcmp(prev->name, names[i]));
        prev = prev->prev;
        i++;
    }

    if (prev == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    freeMemory(head);

    head = buildList(names3, sizeof(names3) / sizeof(*names3));
    curr = head;
    prev = head;
    i = 0;

    while (curr != NULL)
    { // Check to see if all names in the list are present and point to the next expected name
        ASSERT_EQ(0, strcmp(curr->name, names4[i]));
        prev = curr;
        curr = curr->next;
        i++;
    }
    // Checks to see if the list is the same size as the array
    ASSERT_EQ(sizeof(names3) / sizeof(*names3), i);

    if (curr == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    i = 0;
    while (prev != NULL)
    { // Check to see if the expected names in the list are present and point to the previous expected name
        ASSERT_EQ(0, strcmp(prev->name, names3[i]));
        prev = prev->prev;
        i++;
    }

    if (prev == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    freeMemory(head);
}

TEST(TestCase2, checkRemoveCenterNode)
{
    // Keep in mind the list will be in reverse order of the array
    struct nameNode* head = buildList(names, sizeof(names) / sizeof(*names));
    int i = 0;
    head = removeNode(head, "Peter");
    struct nameNode* curr = head;
    struct nameNode* prev = head;

    while (curr != NULL)
    { // Check to see if the expected names in the list are present and point to the next expected name
        ASSERT_EQ(0, strcmp(curr->name, names4[i]));
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (curr == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    i = 0;
    while (prev != NULL)
    { // Check to see if the expected names in the list are present and point to the previous expected name
        ASSERT_EQ(0, strcmp(prev->name, names3[i]));
        prev = prev->prev;
        i++;
    }

    if (prev == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    freeMemory(head);
}

TEST(TestCase2, checkRemoveTailNode)
{
    // Keep in mind the list will be in reverse order of the array
    struct nameNode* head = buildList(names3, sizeof(names3) / sizeof(*names3));
    int i = 0;

    head = removeNode(head, "Peter");
    struct nameNode* curr = head;
    struct nameNode* prev = head;

    while (curr != NULL)
    { // Check to see if the expected names in the list are present and point to the next expected name
        ASSERT_EQ(0, strcmp(curr->name, names4[i]));
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (curr == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    i = 0;
    while (prev != NULL)
    { // Check to see if the expected names in the list are present and point to the previous expected name
        ASSERT_EQ(0, strcmp(prev->name, names3[i]));
        prev = prev->prev;
        i++;
    }

    if (prev == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    head = removeNode(head, "Joe");
    curr = head;
    prev = head;

    i = 0;
    while (curr != NULL)
    { // Check to see if the expected names in the list are present and point to the next expected name
        ASSERT_EQ(0, strcmp(curr->name, names6[i]));
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (curr == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    i = 0;
    while (prev != NULL)
    { // Check to see if the expected names in the list are present and point to the previous expected name
        ASSERT_EQ(0, strcmp(prev->name, names5[i]));
        prev = prev->prev;
        i++;
    }

    if (prev == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    freeMemory(head);
}

TEST(TestCase2, checkRemoveHeadNode)
{
    // Keep in mind the list will be in reverse order of the array
    struct nameNode* head = buildList(names5, sizeof(names5) / sizeof(*names5));
    int i = 0;

    head = removeNode(head, "Carol");
    struct nameNode* curr = head;
    struct nameNode* prev = head;

    while (curr != NULL)
    { // Check to see if the expected names in the list are present and point to the next expected name
        ASSERT_EQ(0, strcmp(curr->name, names8[i]));
        prev = curr;
        curr = curr->next;
        i++;
    }

    if (curr == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    i = 0;
    while (prev != NULL)
    { // Check to see if the expected names in the list are present and point to the previous expected name
        ASSERT_EQ(0, strcmp(prev->name, names7[i]));
        prev = prev->prev;
        i++;
    }

    if (prev == NULL)
        ASSERT_EQ(1, 1);
    else
        ASSERT_EQ(1, 0);

    freeMemory(head);
}

TEST(TestCase3, checkRemoveOneItemList)
{
    struct nameNode* head = buildList(names9, sizeof(names9) / sizeof(*names9));
    // Pass a name that's not in the list
    head = removeNode(head, "Carol");
    ASSERT_EQ("Bobby", head->name);
    ASSERT_EQ(NULL, head->next);
    ASSERT_EQ(NULL, head->prev);

    // Pass a name that's in the list
    head = removeNode(head, "Bobby");
    ASSERT_EQ(NULL, head);
    // Determine if head isn't null
    if (head != NULL)
        freeMemory(head);
}
